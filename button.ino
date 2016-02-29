/*
littleBits Arduino Module
 created  27 Sep 2005 by Tom Igoe   http://arduino.cc/en/Tutorial/ButtonStateChange
 modified 30 Aug 2011 by Tom Igoe
 modified for littleBits 06 Mar 2014 by Matt Richard
 
 _Button State Change Controls Digital Output_
 
   What is supposed to happen:
 * This example shows how to detect when a button changes from off to on and on to off.
 * This is called a state change detection, or edge detection.
 
    Circuit:
 * LittleBits LED or and other output module on digital pin 5
 * LittleBits button on analog pin A0
 
 This sketch includs the following commands:
 pinMode(pin, mode);        pin = a digital pin, mode = OUTPUT or INPUT
 Serial.begin(baudrate);    baudrate = speed of serial communication
 digitalRead(pin);          pin = a digital pin
 if(conditional){}          conditional = logical statement that evaluates to TRUE or FALSE
 digitalWrite(pin, state);  pin = a digital pin, state = HIGH or LOW
*/


// constants are variables whose values won't change:
const int  buttonPin = A0;    // the pin that the pushbutton is attached to

const int  buttonPin1 = A1;    // the pin that the pushbutton is attached to
const int ledPin = 5;       // the pin that the LED is attached to

// these variables values will change:
int buttonPushCounter = 0;   // counter for the number of button presses
int buttonState = 0; 
int buttonState1 = 0; // current state of the button
int lastButtonState = 0;     // previous state of the button

void setup() {
  // initialize the button pin as a input:
  pinMode(buttonPin, INPUT);
  pinMode(buttonPin1, INPUT);
  // initialize the LED as an output:
  pinMode(ledPin, OUTPUT);
  // initialize serial communication:
  Serial.begin(9600);
}


void loop() {
  // read the pushbutton input pin:
  buttonState = digitalRead(buttonPin);


    if (buttonState == HIGH) {
  
      Serial.println("on"); 
    }else {
        Serial.println("off"); 
    }
    
     buttonState1 = digitalRead(buttonPin1);


    if (buttonState1 == HIGH) {
  
      Serial.println("prev"); 
    }else {
        Serial.println("off"); 
    }
      
    
    delay(200);   


}
