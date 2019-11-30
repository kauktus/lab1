/*************************************************
 * Public Constants
 *************************************************/
int getNoteByName(String noteName)
{
if (noteName == "SILENCE") return 0;
if (noteName == "B0") return 31;
if (noteName == "C1") return 33;
if (noteName == "CS1") return 35;
if (noteName == "D1") return 37;
if (noteName == "DS1") return 39;
if (noteName == "E1") return 41;
if (noteName == "F1") return 44;
if (noteName == "FS1") return 46;
if (noteName == "G1") return 49;
if (noteName == "GS1") return 52;
if (noteName == "A1") return 55;
if (noteName == "AS1") return 58;
if (noteName == "B1") return 62;
if (noteName == "C2") return 65;
if (noteName == "CS2") return 69;
if (noteName == "D2") return 73;
if (noteName == "DS2") return 78;
if (noteName == "E2") return 82;
if (noteName == "F2") return 87;
if (noteName == "FS2") return 93;
if (noteName == "G2") return 98;
if (noteName == "GS2") return 104;
if (noteName == "A2") return 110;
if (noteName == "AS2") return 117;
if (noteName == "B2") return 123;
if (noteName == "C3") return 131;
if (noteName == "CS3") return 139;
if (noteName == "D3") return 147;
if (noteName == "DS3") return 156;
if (noteName == "E3") return 165;
if (noteName == "F3") return 175;
if (noteName == "FS3") return 185;
if (noteName == "G3") return 196;
if (noteName == "GS3") return 208;
if (noteName == "A3") return 220;
if (noteName == "AS3") return 233;
if (noteName == "B3") return 247;
if (noteName == "C4") return 262;
if (noteName == "CS4") return 277;
if (noteName == "D4") return 294;
if (noteName == "DS4") return 311;
if (noteName == "E4") return 330;
if (noteName == "F4") return 349;
if (noteName == "FS4") return 370;
if (noteName == "G4") return 392;
if (noteName == "GS4") return 415;
if (noteName == "A4") return 440;
if (noteName == "AS4") return 466;
if (noteName == "B4") return 494;
if (noteName == "C5") return 523;
if (noteName == "CS5") return 554;
if (noteName == "D5") return 587;
if (noteName == "DS5") return 622;
if (noteName == "E5") return 659;
if (noteName == "F5") return 698;
if (noteName == "FS5") return 740;
if (noteName == "G5") return 784;
if (noteName == "GS5") return 831;
if (noteName == "A5") return 880;
if (noteName == "AS5") return 932;
if (noteName == "B5") return 988;
if (noteName == "C6") return 1047;
if (noteName == "CS6") return 1109;
if (noteName == "D6") return 1175;
if (noteName == "DS6") return 1245;
if (noteName == "E6") return 1319;
if (noteName == "F6") return 1397;
if (noteName == "FS6") return 1480;
if (noteName == "G6") return 1568;
if (noteName == "GS6") return 1661;
if (noteName == "A6") return 1760;
if (noteName == "AS6") return 1865;
if (noteName == "B6") return 1976;
if (noteName == "C7") return 2093;
if (noteName == "CS7") return 2217;
if (noteName == "D7") return 2349;
if (noteName == "DS7") return 2489;
if (noteName == "E7") return 2637;
if (noteName == "F7") return 2794;
if (noteName == "FS7") return 2960;
if (noteName == "G7") return 3136;
if (noteName == "GS7") return 3322;
if (noteName == "A7") return 3520;
if (noteName == "AS7") return 3729;
if (noteName == "B7") return 3951;
if (noteName == "C8") return 4186;
if (noteName == "CS8") return 4435;
if (noteName == "D8") return 4699;
if (noteName == "DS8") return 4978;
//return 0;
}
#define NOTE_SILENCE 0

#define NOTE_B0  31
#define NOTE_C1  33
#define NOTE_CS1 35
#define NOTE_D1  37
#define NOTE_DS1 39
#define NOTE_E1  41
#define NOTE_F1  44
#define NOTE_FS1 46
#define NOTE_G1  49
#define NOTE_GS1 52
#define NOTE_A1  55
#define NOTE_AS1 58
#define NOTE_B1  62
#define NOTE_C2  65
#define NOTE_CS2 69
#define NOTE_D2  73
#define NOTE_DS2 78
#define NOTE_E2  82
#define NOTE_F2  87
#define NOTE_FS2 93
#define NOTE_G2  98
#define NOTE_GS2 104
#define NOTE_A2  110
#define NOTE_AS2 117
#define NOTE_B2  123
#define NOTE_C3  131
#define NOTE_CS3 139
#define NOTE_D3  147
#define NOTE_DS3 156
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_FS3 185
#define NOTE_G3  196
#define NOTE_GS3 208
#define NOTE_A3  220
#define NOTE_AS3 233
#define NOTE_B3  247
#define NOTE_C4  262
#define NOTE_CS4 277
#define NOTE_D4  294
#define NOTE_DS4 311
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_FS4 370
#define NOTE_G4  392
#define NOTE_GS4 415
#define NOTE_A4  440
#define NOTE_AS4 466
#define NOTE_B4  494
#define NOTE_C5  523
#define NOTE_CS5 554
#define NOTE_D5  587
#define NOTE_DS5 622
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_FS5 740
#define NOTE_G5  784
#define NOTE_GS5 831
#define NOTE_A5  880
#define NOTE_AS5 932
#define NOTE_B5  988
#define NOTE_C6  1047
#define NOTE_CS6 1109
#define NOTE_D6  1175
#define NOTE_DS6 1245
#define NOTE_E6  1319
#define NOTE_F6  1397
#define NOTE_FS6 1480
#define NOTE_G6  1568
#define NOTE_GS6 1661
#define NOTE_A6  1760
#define NOTE_AS6 1865
#define NOTE_B6  1976
#define NOTE_C7  2093
#define NOTE_CS7 2217
#define NOTE_D7  2349
#define NOTE_DS7 2489
#define NOTE_E7  2637
#define NOTE_F7  2794
#define NOTE_FS7 2960
#define NOTE_G7  3136
#define NOTE_GS7 3322
#define NOTE_A7  3520
#define NOTE_AS7 3729
#define NOTE_B7  3951
#define NOTE_C8  4186
#define NOTE_CS8 4435
#define NOTE_D8  4699
#define NOTE_DS8 4978
