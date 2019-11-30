#include <Arduino.h>
#include "pitches.h"
#include "buzzer.h"
#define PIN_BUZZER 6
Buzzer buzzer(PIN_BUZZER);

int noteName = 0;
double duration = 8;
int melodyLength = 2;
int startTime = 0;

void setup() {
    Serial.begin(9600);
    buzzer.play(noteName, duration, melodyLength);
}

void loop()
{
  int note;
  String noteName;
  
  buzzer.playSound();

  while(Serial.available())
  {
    noteName = Serial.readString();
    noteName = noteName.substring(0, noteName.length()-1);
    Serial.println(noteName);
    note = getNoteByName(noteName);
    Serial.println(note);
    buzzer.turnSoundOn();
    startTime = millis();
    
    buzzer.play(note, duration, melodyLength);
  }
  
  if ((millis() - startTime) > 1000)
  {
    buzzer.turnSoundOff();
  }
}
