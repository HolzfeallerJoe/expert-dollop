#include <Arduino.h>

void randomBlinkPattern()
{
    digitalWrite(LED_BUILTIN, HIGH);
    delay(100);
    digitalWrite(LED_BUILTIN, LOW);
    delay(100);
    digitalWrite(LED_BUILTIN, HIGH);
    delay(100);
    digitalWrite(LED_BUILTIN, LOW);
    delay(1000);
    digitalWrite(LED_BUILTIN, HIGH);
    delay(100);
    digitalWrite(LED_BUILTIN, LOW);
    delay(1000);
}

void dimm() {
    digitalWrite(LED_BUILTIN, HIGH);
    delayMicroseconds(1);
    digitalWrite(LED_BUILTIN, LOW);
    delayMicroseconds(9);
}

void setup() {
    pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
    dimm();
}