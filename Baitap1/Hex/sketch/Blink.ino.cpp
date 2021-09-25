#include <Arduino.h>
#line 1 "C:\\Users\\ACER\\AppData\\Local\\Temp\\arduino_modified_sketch_512835\\Blink.ino"

#line 2 "C:\\Users\\ACER\\AppData\\Local\\Temp\\arduino_modified_sketch_512835\\Blink.ino"
void setup();
#line 8 "C:\\Users\\ACER\\AppData\\Local\\Temp\\arduino_modified_sketch_512835\\Blink.ino"
void loop();
#line 2 "C:\\Users\\ACER\\AppData\\Local\\Temp\\arduino_modified_sketch_512835\\Blink.ino"
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(13, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
