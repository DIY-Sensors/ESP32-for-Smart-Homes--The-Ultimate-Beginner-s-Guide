/*
 *     Maker      : DIYSensors                
 *     Project    : LDR ESP32 WROOM
 *     Version    : 0.1
 *     Date       : 03-2025
 *     Programmer : Ap Matteman
 *     
 *     Library    : None
 *     
 *     BOARD      : ESP32-WROOM-DA Module
 *     
 */ 

 #define LDR_PIN 4

void setup() {
  Serial.begin(115200);
}

void loop() {
  int iLightValue = analogRead(LDR_PIN);

  Serial.print("Light Value: ");
  Serial.println(iLightValue);

  delay(500);

}
