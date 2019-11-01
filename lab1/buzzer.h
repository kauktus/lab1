#pragma once

#define BUZZER_NOTE_DURATION 100

class Buzzer
{
public:
    Buzzer(int _pin)
    {
        pin = _pin;
        pinMode(pin, OUTPUT);

        isEnabled = false;
        //currentNote = 0;
        noteStartedMs = 0;

        note = 0;
        durations = 0;
        melodyLength = 0;
    }

    void turnSoundOn()
    {
        isEnabled = true;
        //currentNote = 0;
        noteStartedMs = 0;
    }

    void turnSoundOff()
    {
        isEnabled = false;
//        currentNote = 0;
        noteStartedMs = 0;
        noTone(pin);
    }

    void setMelody(int _note, double _durations[], int _melodyLength)
    {
        note = _note;
        durations = _durations;
        melodyLength = _melodyLength;
    }

    void playSound()
    {
        if (!isEnabled)
            return;

        unsigned long duration = round(BUZZER_NOTE_DURATION*durations[note]);
        if ((millis() - noteStartedMs) > duration)
        {
            //int note = Serial.parseInt();
            
            if (note == NOTE_SILENCE)
                noTone(pin);
            else 
                tone(pin, note);

            noteStartedMs = millis();
            //currentNote = (currentNote + 1)%melodyLength;
        }
    }

private:
    int pin;
    bool isEnabled;

    //int currentNote;
    unsigned long noteStartedMs;

    //int* notes;
    double* durations;
    int melodyLength;
    int note = Serial.parseInt();
};
