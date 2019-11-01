#include <Arduino.h>

#include "pitches.h"
#include "button.h"
#include "buzzer.h"

#define PIN_BUZZER 6
#define PIN_BUTTON_OFF 5

Button buttonOff(PIN_BUTTON_OFF);
Buzzer buzzer(PIN_BUZZER);


int notes[] = {"pitches.h"};
double durations[] = {8, 8, 1, 8, 1, 8, 1, 24};
int melodyLength = 8;

void setup() {
    buzzer.setMelody(notes, durations, melodyLength);
    buzzer.turnSoundOn();
}
//joj

void loop() {

    if(Serial.available()) {
    int num_note = Serial.parseInt();
    Serial.println(num_note);
    buzzer.setMelody(notes[num_note], 10, 10);
    /*buzzer.playSound();
    if (buttonOff.wasPressed())
    {
        buzzer.turnSoundOff();
    }*/
}
}
