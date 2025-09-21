#include "pitches.h"

int speakerPin = 9;

void setup() {
  // Toca una nota A4 durante 1 segundo
  tone(speakerPin, NOTE_A4);
  delay(1000);
  noTone(speakerPin);
}

void loop() {
  // Bucle vacío
}