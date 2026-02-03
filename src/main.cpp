//
// Created by hp on 03-02-2026.
#include <Arduino.h>
#define irPin 7
void setup() {
    Serial.begin(9600);
    pinMode(irPin, INPUT);
}

void loop() {
    int irValue = digitalRead(irPin);
    if (irValue == HIGH) {
        Serial.println("IR SENSOR: NO Obstacles ");
    }else {
        Serial.println("IR SENSOR: Obstacles detected");
    }
    delay(500);
}