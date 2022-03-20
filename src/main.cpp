#include <Arduino.h>
int ledPin = 13;
int delayPeriod = 100;


void setup() {
  Serial.begin(9600);
  Serial.println(123);
  pinMode(ledPin, OUTPUT);
}

void flash(){
  digitalWrite(ledPin, HIGH);
  delay(delayPeriod);
  digitalWrite(ledPin, LOW);
  delay(delayPeriod);
}

void loop() {
  for (int i = 0; i <20; i++){
  flash();
  }
  delay(3000);
}

