// Development Plan: Commit the code each time a step is completed.
// [x] Set all the pins that are connected to the 7-segment display to LOW (should turn everything on). 
// [x] Create the function show0(), which makes the display show the number 0.
// [x] Create the function show1(), which makes the display show the number 1.
// [x] Create the function show2(), which makes the display show the number 2.
// [x] Create the function show3().
// [x] Create the function show4().
// [x] Create the function show5()
// [x] Create the function show6().
// [x] Create the function show7().
// [x] Create the function show8().
// [x] Create the function show9().
// [x] Create the function showNum(num), which shows the requested number 0-9.
// [x] Create the function turnOff(), which turns off all segments of the display.
// [X] Make a countdown: have the numbers count down to zero.
// [] Restart the countdown every time a button is pressed.

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

// Define function prototypes
void show1();
void show2();
void show3();
void show4();
void show5();
void show6();
void show7();
void show8();
void show9();
void show0();
// Define an array of function pointers
void (*showFunctions[])() = {show1,show2,show3,show4,show5,show6,show7,show8,show9,show0}; // Add more functions here

// Define the showNum function
void showNum(int num) {
    if (num >= 0 && num < sizeof(showFunctions) / sizeof(showFunctions[0])) {
        showFunctions[num](); // Call the function at index num
    } else {
        // Handle out of range error
    }
}

void turnOff(){
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

void show2(){
  int PinsOFF[] = {F,C};
  int PinsON[] = {A,B,G,E,D};
  for (int i = 0; i < 2; i++){
      digitalWrite(PinsOFF[i], HIGH);

  }
  for (int i = 0; i < 5; i++){
      digitalWrite(PinsON[i], LOW);    
  }
}

void show3(){
  int PinsOFF[] = {F,E};
  int PinsON[] = {A,B,G,C,D};
  for (int i = 0; i < 2; i++){
      digitalWrite(PinsOFF[i], HIGH);

  }
  for (int i = 0; i < 5; i++){
      digitalWrite(PinsON[i], LOW);    
  }
}

void show4(){
  int PinsOFF[] = {A,D,E};
  int PinsON[] = {B,G,C,F};
  for (int i = 0; i < 3; i++){
      digitalWrite(PinsOFF[i], HIGH);
  }
  for (int i = 0; i < 4; i++){
      digitalWrite(PinsON[i], LOW);    
  }
}

void show5(){
  int PinsOFF[] = {B,E};
  int PinsON[] = {A,F,G,C,D};
  for (int i = 0; i < 2; i++){
      digitalWrite(PinsOFF[i], HIGH);
  }
  for (int i = 0; i < 5; i++){
      digitalWrite(PinsON[i], LOW);    
  }
}

void show6(){
  int PinsOFF[] = {B};
  int PinsON[] = {A,F,G,C,D,E};
  for (int i = 0; i < 1; i++){
      digitalWrite(PinsOFF[i], HIGH);
  }
  for (int i = 0; i < 6; i++){
      digitalWrite(PinsON[i], LOW);    
  }
}

void show7(){
  int PinsOFF[] = {F,G,D,E};
  int PinsON[] = {A,B,C};
  for (int i = 0; i < 4; i++){
      digitalWrite(PinsOFF[i], HIGH);
  }
  for (int i = 0; i < 3; i++){
      digitalWrite(PinsON[i], LOW);    
  }
}



void show8(){
  int PinsOFF[] = {};
  int PinsON[] = {E,G,F,A,B,C,D};
  for (int i = 0; i < 1; i++){
      digitalWrite(PinsOFF[i], HIGH);
  }
  for (int i = 0; i < 7; i++){
      digitalWrite(PinsON[i], LOW);    
  }
}

void show9(){
  int PinsOFF[] = {E};
  int PinsON[] = {G,F,A,B,C,D};
  for (int i = 0; i < 1; i++){
      digitalWrite(PinsOFF[i], HIGH);
  }
  for (int i = 0; i < 6; i++){
      digitalWrite(PinsON[i], LOW);    
  }
}


void setup() {
  int segmentPins[] = {DIG1,DIG2,A,B,C,D,E,F,G}; // define pins to set as outputs
  //digitalWrite(DIG1,1);
  digitalWrite(DIG2,1);
  for (int i = 0; i < 10; i++){ 
    pinMode(segmentPins[i], OUTPUT);
  }

}

void loop() {

  for (int i = 9; i >= 0; i--){
    showNum(i);
    delay(1000);

  }

}