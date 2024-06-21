/*
    Project name : ESP8266 Light Sensors
    Modified Date: 20-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/esp8266-light-sensors
*/

const int ldrPin = A0; // Analog pin connected to LDR
int sensorValue = 0;   // Variable to store sensor value

void setup() {
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  // Read the sensor value (0-1023)
  sensorValue = analogRead(ldrPin);

  // Print the sensor value to the Serial Monitor
  Serial.print("Light Intensity: ");
  Serial.println(sensorValue);

  // Add a short delay
  delay(1000);
}
