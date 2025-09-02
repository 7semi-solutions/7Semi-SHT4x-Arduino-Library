# 7Semi-SHT4x-Arduino-Library

This Arduino library provides support for the **7Semi SHT4x Sensor Module**, compatible with SHT40, SHT41, and SHT45. It enables precise temperature and humidity sensing over the I2C interface. Built on Sensirion’s SHT4x series, the module is ideal for environmental monitoring and IoT applications.

![Arduino](https://img.shields.io/badge/platform-arduino-blue.svg)
![License](https://img.shields.io/badge/license-MIT-green.svg)
![Status](https://img.shields.io/badge/status-active-brightgreen.svg)

---

## Hardware Required

- 7Semi SHT4x Sensor (SHT40 / SHT41 / SHT45)  
- Arduino-compatible board  
- I2C connection (SDA, SCL)  

---

## Getting Started

### 1. Installation via Arduino Library Manager

1. Open **Arduino IDE**
2. Go to **Library Manager**:
   - Arduino IDE 1.x: `Sketch` > `Include Library` > `Manage Libraries…`
   - Arduino IDE 2.x: Click the **library icon** in the sidebar
3. Search for:
   - 7Semi SHT4x
4. Click **Install**

Then in your sketch:
#include <7semi_sht4x.h>

###  2. Wiring

| SHT4x Pin | Arduino Pin |
| --------- | ----------- |
| SDA       | A4 (Uno)    |
| SCL       | A5 (Uno)    |
| VCC       | 3.3V        |
| GND       | GND         |

### 3.Example Output
  SHT4x Sensor Initialized
  Temperature: 23.65 °C
  Humidity: 49.12 %

