// Development Plan:  Check off each step with an 'x' as you complete each one:
// [x] Showed up to the workshop.
// [x] This file is open in VSCode.
// [x] View the simulated Arduino by opening the diagram.json file (shows up when PlatformIO and WokWi Simulator extensions are installed).
// [x] The Red LED is turned on.
// [x] The Green LED is also turned on.
// [x] The Blue LED is also turned on.
// [x] 300 milliseconds after all the LEDs turn on, the Blue LED turns off.
// [x] The Red LED then turns on and off every second, forever.
// [x] The Green LED simultaneously turns on and off every half-second, forever.
// [x] The Blue LED is on whenever the Green LED is off, and vice-versa.



#include <Arduino.h>

void setup() {
    // Turning on RED
    pinMode(3,OUTPUT);
    

    // Turning GREEN on
    pinMode(4,OUTPUT);
    digitalWrite(4,HIGH);

    // Turning BLUE on
    pinMode(4,OUTPUT);
    digitalWrite(4,HIGH);

}

void loop() {
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    delay(500);
    digitalWrite(4,LOW);
    delay(500);
    digitalWrite(3,LOW);
    digitalWrite(4,HIGH);
    delay(500);
    digitalWrite(4,LOW);
    delay(500);
}
