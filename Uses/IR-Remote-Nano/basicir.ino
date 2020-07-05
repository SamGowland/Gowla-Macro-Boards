#define IRSND_OUTPUT_PIN 11
#include <Keypad.h>
#include <irsndSelectMain15Protocols.h>
#include <irsnd.c.h>

IRMP_DATA irsnd_data;

// ====== INIT KEYPAD ======
const byte ROWS = 3; //four rows
const byte COLS = 3; //three columns
char keys[ROWS][COLS] = {
  {'1','2','3'},
  {'4','5','6'},
  {'7','8','9'}
};
byte rowPins[ROWS] = {2, 3, 4}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {9, 8, 7}; //connect to the column pinouts of the keypad


Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );


void setup(){
    Serial.begin(9600);
    irsnd_init();
    irsnd_data.flags = 0;
    keypad.setHoldTime(100);
}

// ====== IR CODE STORAGE ======
char AppleIRCodes[10] = {
  0x0, // 0: Dummy
  0x0, // 1: Blank
  0xB, // 2: Up, Volume Up
  0x0, // 3: Blank
  0x8, // 4: Left, Previous
  0x4, // 5: Center, Play/Pause
  0x7, // 6: Right, Next
  0x0, // 7: Blank
  0xD, // 8: Down, Volume Down
  0x0 // 9: Blank
};


void loop(){
  char key = keypad.getKey();
  KeyState state = keypad.getState();
  
  if (key || state == HOLD) {
    irsnd_data.protocol = IRMP_APPLE_PROTOCOL;
    irsnd_data.address = 0x82;
    if (key) {
      irsnd_data.command = AppleIRCodes[key - '0'];
    } else {
      delay(5);
    }
    
    irsnd_send_data(&irsnd_data, false);
  }   
}
