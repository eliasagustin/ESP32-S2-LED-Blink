#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);

void setup() {
  Serial.begin(921600);
  // put your setup code here, to run once:

  Serial.println("Fin Setup");
}

void loop() {
  // put your main code here, to run repeatedly:
delay(1000);
Serial.println(myFunction(2, 3));
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}