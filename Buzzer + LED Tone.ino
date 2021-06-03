#define NOTE_C3  131
#define NOTE_D3  147
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_G3  196
#define NOTE_A3  220
#define NOTE_B3  247
#define NOTE_C4  262

int melody[]={
NOTE_CE3,NOTE_D3,NOTE_E3,NOTE_F3,
  NOTE_G3,NOTE_A3,NOTE_B3,NOTE_C4,NOTE_B3,NOTE_A3,NOTE_G3,NOTE_F3
    ,NOTE_E3,NOTE_D3,NOTE_C3
};
int noteDurations[]={
4,4,4,4,4,4,4,4,4,4,4,4,4,4,4
};
byte ledPin[8]={2,3,4,5,6,7,12,9};
int ledState = 0;
void setup()
{
   for(byte i=0;i<8;++i)
  {
     pinMode(ledPin[i],OUTPUT);
  }
}

void loop()
{
  byte ledState[8]={0};
  for(int thisNote=0;thisNote<15;thisNote++){
  	int noteDuration=1000/noteDurations[thisNote];
    tone(8,melody[thisNote],noteDuration);
    if(melody[thisNote]==NOTE_C3){digitalWrite(ledPin[0],HIGH);
                             ledState[0]=ledPin[0];
                              digitalWrite(ledState[0],0);  }
    else if (melody[thisNote]==NOTE_D3){digitalWrite(ledPin[1],HIGH);
                             ledState[1]=ledPin[1];
                                        digitalWrite(ledState[1],0);}
     else if (melody[thisNote]==NOTE_E3){digitalWrite(ledPin[2],HIGH);
                             ledState[2]=ledPin[2];
                                        digitalWrite(ledState[2],0);}
     else if (melody[thisNote]==NOTE_F3){digitalWrite(ledPin[3],HIGH);
                             ledState[3]=ledPin[3];
                                         digitalWrite(ledState[3],0);}
     else if (melody[thisNote]==NOTE_G3){digitalWrite(ledPin[4],HIGH);
                             ledState[4]=ledPin[4];
                                         digitalWrite(ledState[4],0);}
     else if (melody[thisNote]==NOTE_A3){digitalWrite(ledPin[5],HIGH);
                             ledState[5]=ledPin[5];
                                         digitalWrite(ledState[5],0);}
     else if (melody[thisNote]==NOTE_B3){digitalWrite(ledPin[6],HIGH);
                             ledState[6]=ledPin[6];
                                         digitalWrite(ledState[6],0);}
     else if (melody[thisNote]=NOTE_C4){digitalWrite(ledPin[7],HIGH);
                             ledState[7]=ledPin[7];
                                        digitalWrite(ledState[7],LOW);}
  
     int pauseBetweenNotes= noteDuration * 1.3;
    delay(pauseBetweenNotes);
    noTone(8);
   }
    
  //for(int i=0;i<8;i++){digitalWrite(ledState[i],0);}
  	delay(200);// Wait for 1000 millisecond(s)
}
