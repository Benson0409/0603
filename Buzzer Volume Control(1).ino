/*
  Melody
 */
#define NOTE_C3  131
#define NOTE_SC3 139
#define NOTE_D3  147
#define NOTE_SD3 156
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_G3  196
#define NOTE_SG3 208
#define NOTE_A3  220
#define NOTE_B3  247
#define NOTE_C4  262
#define NOTE_SC4 277

// notes in the melody:
int melody[] = {
  NOTE_D3, NOTE_A3, NOTE_D3, NOTE_E3, NOTE_D3, 0, NOTE_D3, NOTE_F3,NOTE_E3
};

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {
  8, 8, 8, 8,8,4,4,4,8
};

void setup() {
  // iterate over the notes of the melody:
}

void loop() {
  // no need to repeat the melody.
    // iterate over the notes of the melody:
  for (int thisNote = 0; thisNote < 9; thisNote++) {

    // to calculate the note duration, take one second
    // divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(8, melody[thisNote], noteDuration);

    // to distinguish the notes, set a minimum time between them.
    // the note's duration + 30% seems to work well:
    int pauseBetweenNotes = noteDuration * 1.5;
    delay(pauseBetweenNotes);
    // stop the tone playing:
    noTone(8);
  }
  delay(200);
}