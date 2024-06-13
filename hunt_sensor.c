/*
    Project name : Hunt sensor module
    Modified Date: 13-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-mega-hunt-sensor-module
*/

const int huntSensorPin = 2; // Digital pin connected to the Hunt sensor module

void setup() 
{
  Serial.begin(9600); // Initialize serial communication
  pinMode(huntSensorPin, INPUT); // Set Hunt sensor pin as input
}

void loop() 
{
  int sensorValue = digitalRead(huntSensorPin); // Read Hunt sensor state

  // Print sensor state to Serial Monitor
  if (sensorValue == HIGH) {
    Serial.println("Magnetic field detected!");
  } else {
    Serial.println("No magnetic field detected.");
  }

  delay(100); // Add a small delay to debounce the sensor
}
