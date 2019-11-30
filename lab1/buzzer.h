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
    }

    void turnSoundOn()
    {
        isEnabled = true;
        currentNote = 0;
        noteStartedMs = 0;
    }

    void turnSoundOff()
    {
        isEnabled = false;
        currentNote = 0;
        noteStartedMs = 0;
        noTone(pin);
    }

    void play(int _note, double _duration, int _melodyLength)
    {
        note = _note;
        duration = _duration;
        melodyLength = _melodyLength;
    }

    void playSound()
    {
        if (!isEnabled)
            return;

        unsigned long duration = round(BUZZER_NOTE_DURATION*duration);
        if ((millis() - noteStartedMs) > duration)
        {   
            if (note == 0)
                noTone(pin);
            else 
                tone(pin, note);

            noteStartedMs = millis();
            currentNote = (currentNote + 1)%melodyLength;
        }
    }

private:
    int pin;
    bool isEnabled;

    int currentNote;
    unsigned long noteStartedMs;

    int note;
    double duration;
    int melodyLength;
};
