/*
  Melody
 */
#define NOTE_C3  131
#define NOTE_D3  147
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_G3  196
#define NOTE_A3  220
#define NOTE_B3  247
#define NOTE_C4  262

byte buttonpin[8]={2,3,4,5,6,7,8,9};
// notes in the melody:


void setup() {
  for(byte i=0;i<8;++i)
  {
    pinMode(buttonpin[i],INPUT_PULLUP);
  }
  // iterate over the notes of the melody:
}

void loop() {
  buttonpin[0]=digitalRead(2);
  buttonpin[1]=digitalRead(3);
  buttonpin[2]=digitalRead(4);
  buttonpin[3]=digitalRead(5);
  buttonpin[4]=digitalRead(6);
  buttonpin[5]=digitalRead(7);
  buttonpin[6]=digitalRead(8);
  buttonpin[7]=digitalRead(9);
    
  if(buttonpin[0]==LOW)
  {
    tone(10, NOTE_C3,100);
    delay(100);
    noTone(10);
  }
  else if(buttonpin[1]==LOW)
  {
    tone(10, NOTE_D3,100);
    delay(100);
    noTone(10);
  }
  else if(buttonpin[2]==LOW)
  {
    tone(10, NOTE_E3,100);
    delay(100);
    noTone(10);
  }
  else if(buttonpin[3]==LOW)
  {
    tone(10, NOTE_F3,100);
    delay(100);
    noTone(10);
  }
  else if(buttonpin[4]==LOW)
  {
    tone(10, NOTE_G3,100);
    delay(100);
    noTone(10);
  }
  else if(buttonpin[5]==LOW)
  {
    tone(10, NOTE_A3,100);
    delay(100);
    noTone(10);
  }
  else if(buttonpin[6]==LOW)
  {
    tone(10, NOTE_B3,100);
    delay(100);
    noTone(10);
  }
  else if(buttonpin[7]==LOW)
  {
    tone(10, NOTE_C4,100);
    delay(100);
    noTone(10);
  }
}