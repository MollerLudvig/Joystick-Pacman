#include <Arduino.h>

#define VRX_PIN  A0
#define VRY_PIN  A1

int xValue = 0;
int yValue = 0;
const int redPin = 13;
const int greenPin = 12;

unsigned long previousRedMillis = 0;
unsigned long previousGreenMillis = 0;

void setup() {
  Serial.begin(9600);
}

void blink(int pin) {
  digitalWrite(pin, HIGH);
  delay(100);
  digitalWrite(pin, LOW);
  delay(100);
}

void loop() {
  // read analog X and Y analog values
  xValue = analogRead(VRX_PIN);
  yValue = analogRead(VRY_PIN);

}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}