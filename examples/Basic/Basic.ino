/********************************************************
 * @file Basic.ino
 *
 * @brief Example sketch for 7semi SHT4x sensor library
 *
 * @details
 * This example demonstrates initializing the SHT4x sensor,
 * setting measurement precision, reading the serial number,
 * and printing temperature and humidity values to the Serial Monitor.
 *
 * Ensure the sensor is connected to the correct I2C pins (SCL/SDA).
 *
 * @section author Author
 *
 * Example by 7semi
 *
 * @section license License
 *
 * @license MIT
 * Copyright (c) 2025 7semi
 ******************************************************/

#include <7semi_SHT4x.h>

SHT4x_7semi sensor;

void setup() {
  Serial.begin(115200);
  Wire.begin();

  if (sensor.begin()) {
    Serial.println("SHT4x initialized successfully!");
  } else {
    Serial.println("Failed to initialize SHT4x.");
    while (1);
  }

  // Optional: set measurement precision
  sensor.setPrecision(SHT4x_7semi::REPEATABILITY_LOW);
}

void loop() {
  float temp, hum;
  if (sensor.readTemperatureHumidity(temp, hum)) {
    Serial.print("Temperature: ");
    Serial.print(temp, 2);
    Serial.print(" °C, Humidity: ");
    Serial.print(hum, 2);
    Serial.println(" %RH");
  } else {
    Serial.println("Failed to read temperature and humidity.");
  }

  delay(2000);
}
