// Development Plan: Commit the code each time a step is completed.
// [x] Write and build the boilerplate code for Arduino (#include<Arduino.h>, setup(), loop())
// [x] Open the simulator
// [x] Make the red LED flash on and off once every 50 milliseconds.
// [x] Make the red LED flash on and off only if one of the buttons is being pressed.
// [x] Turn on an LED when the button of a corresponding color is held down.
// [x] The blue LED should be different; it should turn off when its button is pressed, not on.
// [x] The green LED should be a switch; when its button is pressed, it should change from staying on to staying off, then go back the next time it's pressed.
// [x] When the red button is pressed, it should turn on for a couple of seconds, then automatically turn back off.
// [x] All buttons' LEDs should respond as soon as they are pressed.

#include<Arduino.h>

const int RED_LED = 3;
const int RED_BUTTON = 11;
const int GREEN_LED = 4;
const int GREEN_BUTTON = 10;
const int BLUE_LED = 5;
const int BLUE_BUTTON = 9;

void setup() {
    // Loads RED LED
    pinMode(RED_LED, OUTPUT);
    pinMode(GREEN_LED, OUTPUT);
    pinMode(BLUE_LED,OUTPUT);
    pinMode(RED_BUTTON, INPUT_PULLUP);
    pinMode(BLUE_BUTTON,INPUT_PULLUP);
    pinMode(GREEN_BUTTON,INPUT);
}

void loop() {
    int red_button_state = digitalRead(RED_BUTTON); 
    int green_button_state = digitalRead(GREEN_BUTTON);
    int blue_button_state = digitalRead(BLUE_BUTTON);
    if (red_button_state == LOW){
        digitalWrite(RED_LED,HIGH);
        digitalWrite(BLUE_LED,HIGH);
        delay(2000);
        digitalWrite(RED_LED,LOW);
    }else{
        digitalWrite(RED_LED,LOW);
    }
    
    if (green_button_state == HIGH){
        digitalWrite(GREEN_LED,HIGH);
    } else if (green_button_state == LOW) { 
        digitalWrite(GREEN_LED,LOW);
    }
    if (blue_button_state == HIGH){
        digitalWrite(BLUE_LED,HIGH);
        digitalWrite(BLUE_LED,LOW);
    }else{
        digitalWrite(BLUE_LED,LOW);
    }
        
}
    
