Smart Agriculture Monitoring System using ESP32
Overview

This project is a simple IoT-based Smart Agriculture Monitoring System developed using an ESP32, DHT22 sensor, and a potentiometer. The system monitors temperature, humidity, and simulated soil moisture levels in real time.

In this project, a potentiometer is used to simulate soil moisture values in the Wokwi environment. Based on the simulated moisture level, the system determines whether irrigation is required and indicates the status using an LED.

Features
Real-time temperature monitoring
Real-time humidity monitoring
Simulated soil moisture monitoring
Dry soil indication using LED
Easy to implement and understand
Suitable for IoT and embedded systems learning
Components Used
ESP32 Development Board
DHT22 Temperature & Humidity Sensor
Potentiometer (for soil moisture simulation)
LED
Breadboard (optional)
Jumper Wires
Circuit Connections
DHT22 Sensor
DHT22 Pin	ESP32 Pin
VCC	3.3V
GND	GND
DATA	GPIO 15
Potentiometer
Potentiometer Pin	ESP32 Pin
VCC	3.3V
GND	GND
SIG	GPIO 34
LED
LED Pin	ESP32 Pin
Anode (+)	GPIO 2
Cathode (-)	GND
Working
The DHT22 sensor measures temperature and humidity.
The potentiometer generates analog values to simulate soil moisture levels.
ESP32 reads the sensor values and processes the data.
When the simulated soil moisture value indicates dry soil:
LED turns ON
"Water Needed" message is displayed.
When the simulated soil moisture value indicates sufficient moisture:
LED remains OFF
"No Water Needed" message is displayed.
Sample Output
=================================
Temperature: 30.4 °C
Humidity: 65.2 %

Soil Moisture Value: 2870

Status: Soil Dry
Action: Water Needed
Applications
Smart Agriculture Monitoring
IoT Learning Projects
Embedded Systems Demonstrations
Sensor Interfacing Practice
Note

This project uses a potentiometer to simulate soil moisture readings in the Wokwi simulation environment. In a real-world implementation, the potentiometer can be replaced with an actual soil moisture sensor for practical agricultural monitoring.

Author

Monitha
