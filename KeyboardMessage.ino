/*
  Keyboard Message test

  For the Arduino Leonardo and Micro.

  Sends a text string when a button is pressed.

  The circuit:
  - pushbutton attached from pin 4 to +5V
  - 10 kilohm resistor attached from pin 4 to ground

  created 24 Oct 2011
  modified 27 Mar 2012
  by Tom Igoe
  modified 11 Nov 2013
  by Scott Fitzgerald

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/KeyboardMessage
*/

#include "Keyboard.h"

const int buttonPin1 = 2;          // input pin for pushbutton
const int buttonPin2 = 3;          // input pin for pushbutton
const int buttonPin3 = 5;          // input pin for pushbutton
const int buttonPin4 = 4;          // input pin for pushbutton
const int buttonPin5 = 6;          // input pin for pushbutton
const int buttonPin6 = 7;          // input pin for pushbutton
int previousButton1State = HIGH;   // for checking the state of a pushButton
int previousButton2State = HIGH;   // for checking the state of a pushButton
int previousButton3State = HIGH;   // for checking the state of a pushButton
int previousButton4State = HIGH;   // for checking the state of a pushButton
int previousButton5State = HIGH;   // for checking the state of a pushButton
int previousButton6State = HIGH;   // for checking the state of a pushButton
int counter = 0;                  // button push counter

void setup() {
  // make the pushButton pin an input:
  pinMode(buttonPin1, INPUT_PULLUP);
  pinMode(buttonPin2, INPUT_PULLUP);
  pinMode(buttonPin3, INPUT_PULLUP);  
  // initialize control over the keyboard:
  Keyboard.begin();
}

void loop() {
  // read the pushbutton:
  int button1State = digitalRead(buttonPin1);
  int button2State = digitalRead(buttonPin2);
  int button3State = digitalRead(buttonPin3);  
 
  if (button1State != previousButton1State)
      {
      Keyboard.print("1");
      }
  if (button2State != previousButton2State)
      {
      Keyboard.print("2");
      }
  if (button3State != previousButton3State)
      {
      Keyboard.print("3");
      }
  delay(100);  
  // save the current button state for comparison next time:
  previousButton1State = button1State;
  previousButton2State = button2State;
  previousButton3State = button3State;   
  delay(200);
}
