#include <Arduino.h>

// Costants
int LED = 2;

void setup() {
  delay(2000); // inizialization time
  
  Serial.begin(115200);
  Serial.println("=== ESP32-C3 RUNNING ===");
  Serial.println("Setup completed!");
  
  pinMode(LED, OUTPUT);
}

void loop() {
  digitalWrite(LED, HIGH);
  Serial.println("LED ON - " + String(millis()));
  delay(1000);
  
  digitalWrite(LED, LOW);
  Serial.println("LED OFF - " + String(millis()));
  delay(1000);
}