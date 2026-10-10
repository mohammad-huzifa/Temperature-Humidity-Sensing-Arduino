# Temperature and Humidity Sensing Using Arduino

## Project Overview
This project uses an Arduino microcontroller and a temperature and humidity sensor to measure environmental temperature and humidity. It is designed as a beginner-friendly hardware project to understand sensor interfacing and Arduino programming.

## Objectives
- Measure temperature in degrees Celsius.
- Measure relative humidity as a percentage.
- Display sensor readings in real time through the Serial Monitor or a connected display, depending on the hardware setup.
- Learn the basics of Arduino, sensors, and embedded systems.

## Components Required
- Arduino Uno or compatible Arduino board
- DHT11 or DHT22 temperature and humidity sensor
- Jumper wires
- Breadboard, if required
- USB cable for programming and power

## Working Principle
The sensor measures the surrounding temperature and humidity and sends the readings to the Arduino. The Arduino processes the sensor data and displays the readings using the configured output, such as the Serial Monitor or an optional display.

## Software and Tools
- Arduino IDE
- Arduino programming language (C/C++)
- DHT sensor library, if required by the code

## Applications
- Indoor environmental monitoring
- Greenhouse monitoring
- Basic weather monitoring projects
- Educational electronics and IoT experiments

## How to Run
1. Install the Arduino IDE.
2. Connect the sensor to the Arduino according to your circuit diagram and sensor specifications.
3. Install the required sensor library, if used by the code.
4. Open the Arduino source code in the Arduino IDE.
5. Select your Arduino board and the correct COM port.
6. Upload the code to the board.
7. Open the Serial Monitor or configured display to view the readings.

## Repository Contents
- `code/` – Arduino source code.
- `circuit/` – Circuit diagram or wiring images, if available.
- `images/` – Project photographs, if available.

## Future Improvements
- Add an LCD or OLED display.
- Send readings to an IoT dashboard.
- Add alerts when temperature or humidity exceeds a chosen threshold.
- Store sensor readings for later analysis.

## Author
Mohammad Huzifa

## Note
The sensor model, wiring, output method, and component list should be updated to match the actual hardware used in this project.
