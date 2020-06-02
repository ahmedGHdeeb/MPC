#define ledPin 13

char* letters[] = { ".-", "-...", "-.-.","-..",  ".", "..-.", "--.", "....", "..",
                    ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.-",
                    "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};

int dotDelay = 200;
/*
 * Morce Code Letters
 * A .- N -. 0 ——B -… O —- 1 .—— C -.-. P .--. 2 ..--D -.. Q --.- 3 …-E . R .-. 4 ….F ..-. S … 5 ….. G --. T - 6 -…. H …. U ..- 7 --… I .. V …- 8 ---.. J .--- W .-- 9 ----. K -.- X -..L .-.. Y -.-M -- Z --..
 */
 
void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  char ch;
  if(Serial.available()) 
  {
    ch = Serial.read(); // read a single letter
    Serial.println(ch);
    if(ch >= 'a' && ch <= 'z')
    {
      flashSequence(letters[ch - 'a']);
    }
    else if(ch >= 'A' && ch <= 'Z')
    {
      flashSequence(letters[ch - 'A']);
    }
    else if(ch >= '0' && ch <= '9')
    {
      flashSequence(letters[ch - '0']);
    }
    else if(ch == ' ')
    {
      delay(dotDelay * 4); // gab between words
    }
  }
}

void flashSequence(char* seq)
{
  Serial.print(seq);
  Serial.println(" entered flashSequence");
  int i = 0;
  while(seq[i] != NULL)
  {
    flashDotOrDash(seq[i]);
    i++;
  }
  delay(dotDelay * 3);
}

void flashDotOrDash(char dotOrDash)
{
  Serial.println("entered flashDotOrDash");
  digitalWrite(ledPin, HIGH);
  if(dotOrDash == '.') // do not use "."
  {
    Serial.print(" dot");
    delay(dotDelay);
  } else {
    // must be a -
    delay(dotDelay * 3);    
    Serial.print(" dash");
   }
   digitalWrite(ledPin, LOW);
   delay(dotDelay);
}
