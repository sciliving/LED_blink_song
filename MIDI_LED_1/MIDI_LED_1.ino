#include <MIDI.h>
MIDI_CREATE_DEFAULT_INSTANCE();

void setup() {
  // put your setup code here, to run once:
  MIDI.begin();
  MIDI.turnThruOff();
  pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (MIDI.read())
  {
    switch(MIDI.getType()){
      case midi::NoteOn:
        digitalWrite(13, HIGH);
        break;
      case midi::NoteOff:
        digitalWrite(13,LOW);
        break;
      }
    }
}
