#include <Arduino.h>
//
#include "pitches.h"
#include "buzzer.h"
//
#define PIN_BUZZER 6
//
Buzzer buzzer(PIN_BUZZER);
//

//int note = "pitches.h"[note];
//int note = Serial.parseInt();
int note = Serial.parseInt();
double durations[] = {8, 8, 1, 8, 1, 8, 1, 24};
int melodyLength = 8;

void setup() {
//    buzzer.setMelody(note, durations, melodyLength);
//    buzzer.turnSoundOn();
    Serial.begin(115200);
    //Serial.parseInt();
}

void loop() {
    if(Serial.available()) {
        int note = Serial.parseInt();
        Serial.println(note);
        buzzer.playSound(note);
    }
}
