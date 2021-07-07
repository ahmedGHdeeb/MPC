#define LED_Pin 13

void setup() {
  pinMode(LED_Pin, OUTPUT);
}

void loop() {
  digitalWrite(LED_Pin, HIGH);
}
