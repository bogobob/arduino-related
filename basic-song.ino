//I use as testing for speakers
int piezoPin = 8;
int delayMS = 250;
void setup() {
  for(int i = 0; i < 3; i = i++){
  tone(piezoPin, 200, 150);
  delay(delayMS);
  tone(piezoPin, 150, 150);
  delay(delayMS);
  tone(piezoPin, 100, 300);
  delay(delayMS);
  tone(piezoPin, 150, 150);
  i = i + 1;//it doesn't automaticlly add 1 for some reason
  }
  delay(400);
  tone(piezoPin, 200, 500);
  delay(delayMS);
  tone(piezoPin, 250, 500);
  delay(delayMS);
  tone(piezoPin, 200, 500);
  delay(delayMS);

}
void loop() {
  //no need to repeat the "song" over and over
}
