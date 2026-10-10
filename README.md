
# Temperature and Humidity Sensing Using Arduino

## Project Overview
This project uses an Arduino microcontroller and a temperature and humidity sensor to measure environmental conditions. The sensor readings are displayed in real time through the Arduino Serial Monitor.

## Objectives
- Measure temperature in degrees Celsius.
- Measure relative humidity as a percentage.
- Understand sensor interfacing with Arduino.
- Learn the basics of embedded systems and hardware programming.

## Components Required
- Arduino Uno
- DHT11 temperature and humidity sensor
- Breadboard
- Jumper wires
- USB cable

## Software and Tools
- Arduino IDE
- Arduino programming language (C/C++)
- DHT sensor library by Adafruit
- Adafruit Unified Sensor library

## Working Principle
The DHT11 sensor measures the surrounding temperature and humidity and sends the readings to the Arduino. The Arduino processes the sensor data and displays the values in the Serial Monitor.

## Circuit Connections
| DHT11 Pin | Arduino Uno Pin |
|-----------|-----------------|
| VCC       | 5V              |
| DATA      | Digital Pin 2   |
| GND       | GND              |

## How to Run
1. Install the Arduino IDE.
2. Install the required DHT sensor libraries.
3. Connect the DHT11 sensor to the Arduino.
4. Open `temperature_humidity.ino`.
5. Select the correct board and COM port.
6. Upload the code to the Arduino.
7. Open the Serial Monitor and set the baud rate to 9600.
8. Observe the temperature and humidity readings.

## Applications
- Indoor environmental monitoring
- Greenhouse monitoring
- Basic weather monitoring
- Educational electronics projects

## Future Improvements
- Add an LCD or OLED display.
- Connect the project to an IoT platform.
- Record readings for later analysis.
- Add alerts for high temperature or humidity.

## Author
Mohammad Huzifa

## Project Type
Beginner Hardware / Arduino Project
