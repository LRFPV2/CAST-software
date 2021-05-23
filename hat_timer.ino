const int stretchDuration = 45; // in seconds
#define restDuration 15 // in seconds

const int redLED = 0;
const int greenLED = 1;

void setup() {
  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
}

void loop() {
  stretch();
  tenSeconds();
  tenSeconds();
  tenSeconds();
  tenSeconds();
  delay(5000);
  for(int i = 0; i < restDuration - 5; i++){
      rest();
  }
  fiveSeconds();

}

void fiveSeconds(){
  for(int i = 0; i < 5; i++){
  digitalWrite(redLED, 1);
  //digitalWrite(greenLED, 0);
  delay(500);
  digitalWrite(redLED, 0);
  //digitalWrite(greenLED, 1);
  delay(500);
  }
  
}

void tenSeconds(){
  delay(9000);
  digitalWrite(redLED, 1);
  delay(100);
  digitalWrite(redLED, 0);
  
}

void stretch() {
  digitalWrite(greenLED, 1);
  digitalWrite(redLED, 0);
}


void rest() {
  digitalWrite(greenLED, 0);
  for(int i = 0; i <= 255; i++){
    //analogWrite(greenLED, 255-i);
    analogWrite(redLED, i);
    delayMicroseconds(1776);
  }
  for(int i = 255; i >= 0; i--){
    //analogWrite(greenLED, 255-i);
    analogWrite(redLED, i);
    delayMicroseconds(1776);
  }

}
