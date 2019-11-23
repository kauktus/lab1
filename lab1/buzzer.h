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
        currentNote = 0;
        noteStartedMs = 0;

        notes = 0;

        durations = 0;
        melodyLength = 0;
    }

    void turnSoundOn()
    {
        isEnabled = true;
        noteStartedMs = 0;
    }

    void turnSoundOff()
    {
        isEnabled = false;
        noteStartedMs = 0;
        noTone(pin);
    }

    void setMelody(int _notes[], double _durations[], int _melodyLength)
    {
        notes = _notes;
        durations = _durations;
        melodyLength = _melodyLength;
    }

    void playSound(int note)
    {
        if (note == NOTE_SILENCE)
          noTone(pin);
        else 
          tone(pin, note);
    }

private:
    int pin;
    bool isEnabled;

    int currentNote;
    unsigned long noteStartedMs;

    int* notes;
    double* durations;
    int melodyLength;
};
