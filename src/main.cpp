#include <Arduino.h>
int ledPin = 13;
int delayPeriod = 100;
void setup() {
  Serial.begin(9600);
  Serial.println(123);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH);
  delay(delayPeriod);
  digitalWrite(ledPin, LOW);
  delay(delayPeriod);
  delayPeriod = delayPeriod + 100;
}