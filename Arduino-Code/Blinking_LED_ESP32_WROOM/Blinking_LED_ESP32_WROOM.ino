/*
 *     Maker      : DIYSensors                
 *     Project    : Blinking LED ESP32 WROOM
 *     Version    : 0.1
 *     Date       : 02-2025
 *     Programmer : Ap Matteman
 *     
 *     Library    : -
 *     
 *     BOARD      : ESP32-WROOM-DA Module
 *     
 */ 

const int iPin_LedRed = 2;

void setup() {
   pinMode(iPin_LedRed, OUTPUT);
}

void loop() {
  digitalWrite(iPin_LedRed, HIGH);
  delay(1000);
  digitalWrite(iPin_LedRed, LOW);
  delay(1000);
}
