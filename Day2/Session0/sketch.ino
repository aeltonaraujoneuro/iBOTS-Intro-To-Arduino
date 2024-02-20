int sensorPin = A0;   // select the input pin for the potentiometer
int sensorValue = 0;  // variable to store the value coming from the sensor
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(8, OUTPUT);
  pinMode(13, OUTPUT);
}
// the loop function runs over and over again forever
void loop() {
  sensorValue = analogRead(sensorPin) * 10;
  printf(sensorValue);
  digitalWrite(8, HIGH);  // turn the LED on (HIGH is the voltage level)
  digitalWrite(13, LOW);
  delay(sensorValue);                      // wait for a second
  digitalWrite(8, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(13, HIGH);
  delay(sensorValue);                      // wait for a second
}