/*
 *     Maker      : DIYSensors                
 *     Project    : LDR & LED ESP32 WROOM
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
 #define LED_PIN 2

void setup() {
  Serial.begin(115200);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  int iLightValue = analogRead(LDR_PIN);

  Serial.print("Light Value: ");
  Serial.println(iLightValue);

  if (iLightValue < 3000) {
    digitalWrite(LED_PIN,HIGH);
  } else {
    digitalWrite(LED_PIN, LOW);
  }

  delay(500);

}
