/*
  Project: Temperature and Humidity Monitoring System
  Board: Arduino Uno R3
  Sensor: DHT11 (change to DHT22 if you use a DHT22)
  Output: Arduino IDE Serial Monitor (no LCD required)

  Typical DHT11 wiring:
    DHT VCC  -> Arduino 5V
    DHT GND  -> Arduino GND
    DHT DATA -> Arduino digital pin 2

  If you have a bare 4-pin DHT sensor, use a 10 kOhm pull-up resistor
  between VCC and DATA. Many sensor modules already include one.

  Arduino IDE library required:
    Install "DHT sensor library" by Adafruit.
    If prompted, also install "Adafruit Unified Sensor".
*/

#include <DHT.h>

#define DHTPIN 2       // DHT sensor data pin connected to digital pin 2
#define DHTTYPE DHT11  // Change to DHT22 if you have a DHT22 sensor

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();

  Serial.println("Temperature and Humidity Monitoring System");
  Serial.println("------------------------------------------");
  delay(2000);
}

void loop() {
  // DHT sensors need time between readings; 2 seconds is a safe interval.
  float humidity = dht.readHumidity();
  float temperatureC = dht.readTemperature();

  if (isnan(humidity) || isnan(temperatureC)) {
    Serial.println("Failed to read from DHT sensor. Check wiring and sensor type.");
    delay(2000);
    return;
  }

  Serial.print("Temperature: ");
  Serial.print(temperatureC, 1);
  Serial.print(" °C  |  Humidity: ");
  Serial.print(humidity, 1);
  Serial.println(" %");

  delay(2000);
}
