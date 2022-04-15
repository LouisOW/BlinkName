
int ledPin = D7;
int dit = 80; 
int pausey = 80;
int doot = 240;
int charSpace = 240;
int wordSpace = 560;


void setup() {
  pinMode(ledPin, OUTPUT);
}
//code for short blink
void DIT(){
  digitalWrite(ledPin, HIGH);
  delay(dit);
  digitalWrite(ledPin, LOW);
  delay(pausey); 
}
//code for long blink
void DOOT(){
  digitalWrite(ledPin, HIGH);
  delay(doot);
  digitalWrite(ledPin, LOW);
  delay(pausey);
}

//below is the code that define the blinks for each letter in my first name "Louis"
void LChar(){
  DIT();
  DOOT();
  DIT();
  DIT();
  delay(charSpace);
}
void OChar(){
  DOOT();
  DOOT();
  DOOT();
  delay(charSpace);
}
void UChar(){
  DIT();
  DIT();
  DOOT();
  delay(charSpace);
}
void IChar(){
  DIT();
  DIT();
  delay(charSpace);
}
void SChar(){
  DIT();
  DIT();
  DIT();
  delay(charSpace);
}
void loop() {
    LChar();
    OChar();
    UChar();
    IChar();
    SChar();
    delay(wordSpace);
}
