# 🌱 Smart Agriculture Monitoring System using ESP32

## 📖 Project Description

The Smart Agriculture Monitoring System is an IoT-based project designed to monitor environmental conditions that influence agricultural productivity. This system utilizes an ESP32 microcontroller along with a DHT22 sensor to measure temperature and humidity. A potentiometer is used in the Wokwi simulation environment to emulate soil moisture levels.

Based on the sensor readings, the system determines whether irrigation is required and provides visual feedback through an LED indicator. This project demonstrates the application of embedded systems and IoT technologies in modern agriculture.

---

## 🎯 Objectives

* Monitor temperature and humidity in real time.
* Simulate soil moisture levels using a potentiometer.
* Indicate dry soil conditions through an LED.
* Demonstrate sensor interfacing with ESP32.
* Understand the fundamentals of IoT-based agricultural monitoring.

---

## 🛠️ Components Used

* ESP32 Development Board
* DHT22 Temperature and Humidity Sensor
* Potentiometer (Soil Moisture Simulation)
* LED
* Jumper Wires
* Wokwi Simulation Platform

---

## 🔌 Circuit Connections

### DHT22 Sensor

| DHT22 Pin | ESP32 Pin |
| --------- | --------- |
| VCC       | 3.3V      |
| GND       | GND       |
| DATA      | GPIO 15   |

### Potentiometer

| Potentiometer Pin | ESP32 Pin |
| ----------------- | --------- |
| VCC               | 3.3V      |
| GND               | GND       |
| SIG               | GPIO 34   |

### LED

| LED Pin     | ESP32 Pin |
| ----------- | --------- |
| Anode (+)   | GPIO 2    |
| Cathode (-) | GND       |

---

## ⚙️ Working Principle

1. The DHT22 sensor measures ambient temperature and humidity.
2. The potentiometer generates analog values to simulate soil moisture conditions.
3. The ESP32 reads and processes the sensor data.
4. When the moisture value crosses the predefined threshold, the system identifies the soil as dry.
5. The LED turns ON and a "Water Needed" message is displayed on the Serial Monitor.
6. If the soil is considered moist, the LED remains OFF and a "No Water Needed" message is displayed.

---

## 📊 Sample Output

Temperature: 30.4 °C

Humidity: 65.2 %

Soil Moisture Value: 2870

Status: Soil Dry

Action: Water Needed

---

## 🌟 Features

* Real-time environmental monitoring
* Temperature and humidity sensing
* Simulated soil moisture monitoring
* LED-based irrigation indication
* Easy-to-understand implementation
* Suitable for IoT and Embedded Systems learning

---

## 🚜 Applications

* Smart Agriculture Systems
* Precision Farming
* Greenhouse Monitoring
* Educational IoT Projects
* Embedded Systems Demonstrations

---

## 🔮 Future Enhancements

* Integration of a real soil moisture sensor
* Automatic water pump control
* Wi-Fi based remote monitoring
* Cloud data logging and analytics
* Mobile application integration

---

## 📝 Note

This project was developed and tested using the Wokwi simulation platform. A potentiometer is used to simulate soil moisture readings. In practical deployments, the potentiometer can be replaced with an actual soil moisture sensor for real-time agricultural monitoring.

---

## 👩‍💻 Author

**Monitha**


