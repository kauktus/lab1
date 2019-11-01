#include <Arduino.h>

#include "pitches.h"
#include "buzzer.h"

#define PIN_BUZZER 6
#define PIN_BUTTON_OFF 5

Buzzer buzzer(PIN_BUZZER);


int note = "pitches.h"[note];
double durations[] = {8, 8, 1, 8, 1, 8, 1, 24};
int melodyLength = 8;

void setup() {
    buzzer.setMelody(note, durations, melodyLength);
    buzzer.turnSoundOn();
}
//fofo
void loop() {

    if(Serial.available()) {
   // int myNote = Serial.parseInt();
    Serial.println(note);
    buzzer.playSound();
    }}
