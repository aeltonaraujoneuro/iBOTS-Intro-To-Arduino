// Development Plan: Commit the code each time a step is completed.
// [ ] Set all the pins that are connected to the 7-segment display to LOW (should turn everything on). 
// [ ] Create the function show0(), which makes the display show the number 0.
// [ ] Create the function show1(), which makes the display show the number 1.
// [ ] Create the function show2(), which makes the display show the number 2.
// [ ] Create the function show3().
// [ ] Create the function show4().
// [ ] Create the function show5()
// [ ] Create the function show6().
// [ ] Create the function show7().
// [ ] Create the function show8().
// [ ] Create the function show9().
// [ ] Create the function showNum(num), which shows the requested number 0-9.
// [ ] Create the function turnOff(), which turns off all segments of the display.
// [ ] Make a countdown: have the numbers count down to zero.
// [ ] Restart the countdown every time a button is pressed.

#include <Arduino.h>
int DIG1 = 2;
int DIG2 = 3;
int A = 6;
int B = 7;
int C = 8;
int D = 9;
int E = 10;
int F = 11;
int G = 12;

void showNone(){
  int Pins[] = {A,B,C,D,E,F,G};
  for (int i = 0; i < 7; i++){
      digitalWrite(Pins[i], HIGH);
  }
}

void show0(){
  int Pins[] = {A,B,C,D,E,F};
  digitalWrite(G,HIGH);
    for (int i = 0; i < 6; i++){
      digitalWrite(Pins[i], LOW);
      
    }
}

void show1(){
  int Pins[] = {A,D,E,F,G};
  digitalWrite(B,LOW);
  digitalWrite(C,LOW);
  for (int i = 0; i < 5; i++){
      digitalWrite(Pins[i], HIGH);
      
  }
}

void setup() {
  int segmentPins[] = {DIG1,DIG2,A,B,C,D,E,F,G}; // define pins to set as outputs
  
  for (int i = 0; i < 10; i++){ 
    pinMode(segmentPins[i], OUTPUT);
  }

}

void loop() {
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  showNone();
  show0();
  delay(1000);
  show1();
  delay(1000);
  show0();
  delay(1000);
}