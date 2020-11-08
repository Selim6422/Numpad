
#include <Arduino.h>
#include <Keyboard.h>
#include <Keypad.h>



#define ROWS 3
#define COLS 6


char keys[ROWS][COLS] = {
  {'0', '1', '2', '3', '4', '5'},
  {'6', '7', '8','9', 'A', 'B'},
  {'C', 'D', 'E','F', 'G', 'H'}
};

byte rowPins[ROWS] = {A0 ,A1 ,A2}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {2 , 3 , 4,5,6,7}; //connect to the column pinouts of the keypad

//INIZIALIZE KEYPAD MATRIX

Keypad kpad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS);

void setup()
{
  Serial.begin(9600);

  //RESET KEYBOARD
  Keyboard.begin();
  Keyboard.releaseAll();
}
int mi = 0;

void loop()
{
  //##############################################################################
  //###########################KEYPAD GESTIONE ###################################

  if (kpad.getKeys())
  {
    for (int i = 0; i < LIST_MAX; i++) // Scan the whole key list.
    {
      if ( kpad.key[i].stateChanged )   // Only find keys that have changed state.
      {
        //###########################ALLOCAZIONE MACRO E TASTI#########################
        char tasto = (char)kpad.key[i].kchar;
        //Serial.println(tasto);

        if (tasto == '0')
        {
          switch (kpad.key[i].kstate) {  // Report active key state : IDLE, PRESSED, HOLD, or RELEASED
            case PRESSED:
              Keyboard.press(47);
              break;
            case RELEASED:
              Keyboard.release(47);
              break;
            case IDLE:
              break;
            case HOLD:
              break;
          }
        }

        if (tasto == '1')
        {
          switch (kpad.key[i].kstate) {  // Report active key state : IDLE, PRESSED, HOLD, or RELEASED
            case PRESSED:
              Keyboard.press(KEY_ESC);
              break;
            case RELEASED:
              Keyboard.release(KEY_ESC);
              break;
            case IDLE:
              break;
            case HOLD:
              break;
          }
        }
        if (tasto == '2')
        {
          switch (kpad.key[i].kstate) {  // Report active key state : IDLE, PRESSED, HOLD, or RELEASED
            case PRESSED:
              Keyboard.press('7');
              break;
            case RELEASED:
              Keyboard.release('7');
              break;
            case IDLE:
              break;
            case HOLD:
              break;
          }
        }
        if (tasto == '3')
        {
          switch (kpad.key[i].kstate) {  // Report active key state : IDLE, PRESSED, HOLD, or RELEASED
            case PRESSED:
              Keyboard.press('4');
              break;
            case RELEASED:
              Keyboard.release('4');
              break;
            case IDLE:
              break;
            case HOLD:
              break;
          }
        }

        if (tasto == '4')
        {
          switch (kpad.key[i].kstate) {  // Report active key state : IDLE, PRESSED, HOLD, or RELEASED
            case PRESSED:
              Keyboard.press('1');
              break;
            case RELEASED:
              Keyboard.release('1');
              break;
            case IDLE:
              break;
            case HOLD:
              break;
          }
        }
        if (tasto == '5')
        {
          switch (kpad.key[i].kstate) {  // Report active key state : IDLE, PRESSED, HOLD, or RELEASED
            case PRESSED:
              Keyboard.press('5');
              break;
            case RELEASED:
              Keyboard.release('5');
              break;
            case IDLE:
              break;
            case HOLD:
              break;
          }
        }
        if (tasto == '6')
        {
          switch (kpad.key[i].kstate) {  // Report active key state : IDLE, PRESSED, HOLD, or RELEASED
            case PRESSED:
              Keyboard.press(93);
              break;
            case RELEASED:
              Keyboard.release(93);
              break;
            case IDLE:
              break;
            case HOLD:
              break;
          }
        }
        if (tasto == '7')
        {
          switch (kpad.key[i].kstate) {  // Report active key state : IDLE, PRESSED, HOLD, or RELEASED
            case PRESSED:
              Keyboard.press(38);
              break;
            case RELEASED:
              Keyboard.release(38);
              break;
            case IDLE:
              break;
            case HOLD:
              break;
          }
        }
        if (tasto == '8')
        {
          switch (kpad.key[i].kstate) {  // Report active key state : IDLE, PRESSED, HOLD, or RELEASED
            case PRESSED:
              Keyboard.press('8');
              break;
            case RELEASED:
              Keyboard.release('8');
              break;
            case IDLE:
              break;
            case HOLD:
              break;
          }
        }
        if (tasto == '9')
        {
          switch (kpad.key[i].kstate) {  // Report active key state : IDLE, PRESSED, HOLD, or RELEASED
            case PRESSED:
              Keyboard.press('5');
              break;
            case RELEASED:
              Keyboard.release('5');
              break;
            case IDLE:
              break;
            case HOLD:
              break;
          }
        }
        if (tasto == 'A')
        {
          switch (kpad.key[i].kstate) {  // Report active key state : IDLE, PRESSED, HOLD, or RELEASED
            case PRESSED:
              Keyboard.press('2');
              break;
            case RELEASED:
              Keyboard.release('2');
              break;
            case IDLE:
              break;
            case HOLD:
              break;
          }
        }
        if (tasto == 'B')
        {
          switch (kpad.key[i].kstate) {  // Report active key state : IDLE, PRESSED, HOLD, or RELEASED
            case PRESSED:
              Keyboard.press('0');
              break;
            case RELEASED:
              Keyboard.release('0');
              break;
            case IDLE:
              break;
            case HOLD:
              break;
          }
        }
        if (tasto == 'C')
        {
          switch (kpad.key[i].kstate) {  // Report active key state : IDLE, PRESSED, HOLD, or RELEASED
            case PRESSED:
              Keyboard.press(176);
              break;
            case RELEASED:
              Keyboard.release(176);
              break;
            case IDLE:
              break;
            case HOLD:
              break;
          }
        }
        if (tasto == 'D')
        {
          switch (kpad.key[i].kstate) {  // Report active key state : IDLE, PRESSED, HOLD, or RELEASED
            case PRESSED:
              Keyboard.press(125);
              break;
            case RELEASED:
              Keyboard.release(125);
              break;
            case IDLE:
              break;
            case HOLD:
              break;
          }
        }
        if (tasto == 'E')
        {
          switch (kpad.key[i].kstate) {  // Report active key state : IDLE, PRESSED, HOLD, or RELEASED
            case PRESSED:
              Keyboard.press('9');
              break;
            case RELEASED:
              Keyboard.release('9');
              break;
            case IDLE:
              break;
            case HOLD:
              break;
          }
        }
        if (tasto == 'F')
        {
          switch (kpad.key[i].kstate) {  // Report active key state : IDLE, PRESSED, HOLD, or RELEASED
            case PRESSED:
              Keyboard.press('6');
              break;
            case RELEASED:
              Keyboard.release('6');
              break;
            case IDLE:
              break;
            case HOLD:
              break;
          }
        }
        if (tasto == 'G')
        {
          switch (kpad.key[i].kstate) {  // Report active key state : IDLE, PRESSED, HOLD, or RELEASED
            case PRESSED:
              Keyboard.press('3');
              break;
            case RELEASED:
              Keyboard.release('3');
              break;
            case IDLE:
              break;
            case HOLD:
              break;
          }
        }
        if (tasto == 'H')
        {
          switch (kpad.key[i].kstate) {  // Report active key state : IDLE, PRESSED, HOLD, or RELEASED
            case PRESSED:
              Keyboard.press(',');
              break;
            case RELEASED:
              Keyboard.release(',');
              break;
            case IDLE:
              break;
            case HOLD:
              break;
          }
        }
        //#######################################FINE IMPOSTAZIONE#################################
      }

    }
  }

}
