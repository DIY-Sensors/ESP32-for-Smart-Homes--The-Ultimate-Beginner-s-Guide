/*
 *     Maker      : DIYSensors                
 *     Project    : Blinking LED ESP32 WROOM
 *     Version    : 0.1
 *     Date       : 02-2025
 *     Programmer : Ap Matteman
 *     
 *     Library    : DHT sensor library by Adafruit
 *     
 *     BOARD      : ESP32-WROOM-DA Module
 *     
 */ 

#include <DHT.h>

#define DHTPIN 4          // Digital pin connected to the DHT sensor 
#define DHTTYPE DHT22     // DHT22 (AM2302) sensor

DHT dht(DHTPIN, DHTTYPE);


void setup() {
     Serial.begin(115200);  // Set the speed for comminicating with the serial monitor
     dht.begin();
}

void loop() {
    
    float fTempC = dht.readTemperature();
    float fTempF = dht.readTemperature(true);
    float fHum = dht.readHumidity();

    Serial.print("Temperature: "); 
    Serial.print(fTempC); 
    Serial.println("°C");

    Serial.print("Temperature: "); 
    Serial.print(fTempF); 
    Serial.println("°F");
 
    Serial.print("Humidity: "); 
    Serial.print(fHum); 
    Serial.println("%");

    Serial.println("----------------------------");

    delay(2000);

}
