#include <Arduino.h>

String command = "";

void setup() {
    Serial.begin(9600);
    pinMode(13, OUTPUT);
    Serial.println("Ready");
}

void loop() {

    if (Serial.available() > 0) {

        command = Serial.readStringUntil('\n');
        command.trim();

        Serial.println(command);

        if (command == "light on") {
            digitalWrite(13, HIGH);
        }

        else if (command == "light off") {
            digitalWrite(13, LOW);
        }
    }
}