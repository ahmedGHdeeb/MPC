// More Ligth at night
int ledPin = 9;
int sensorPin = A0;
float sensorValue = 0;
int valMap = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(sensorPin, INPUT);
  Serial.begin(9600);
}
float take_read(int pin)
{
  float read1;float read2; float read3;
  read1 = analogRead(pin);delay(10);
  read2 = analogRead(pin);delay(10);
  read3 = analogRead(pin);delay(10);
  Serial.print("Values");Serial.print(read1);Serial.print(read2);Serial.print(read3);
  return (read1+read2+read3)/3;
}

float lastRead = -28772; // max light
void change_pritness(float current_read, float last_read, int light_pin, int max_light, int min_light)
{
  float i = (current_read - last_read) / 100; // change light in 10 steps
  float light = last_read;
  Serial.println("Entered Func");
  Serial.println(i);
  for( ;light < current_read;light+=i)
  {
    digitalWrite(light_pin, map(light, max_light, min_light, 0, 100));
    delay(100); // for each step delay 0.1 sec
  }
}

void loop() {
  sensorValue = 100 * take_read(sensorPin);
  //sensor value ar dark = 900, 1000 at light
  Serial.println(sensorValue);
  change_pritness(sensorValue, lastRead, ledPin, 102300, 950);
  //lastRead = sensorValue;
}
