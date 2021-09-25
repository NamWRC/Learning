#include <Arduino.h>
#line 1 "D:\\Hex\\sketch_sep24a\\sketch_sep24a.ino"
int x = 0;

#line 3 "D:\\Hex\\sketch_sep24a\\sketch_sep24a.ino"
void setup();
#line 8 "D:\\Hex\\sketch_sep24a\\sketch_sep24a.ino"
void loop();
#line 3 "D:\\Hex\\sketch_sep24a\\sketch_sep24a.ino"
void setup() {
  pinMode(2,INPUT);
  pinMode(13,OUTPUT);
}

void loop() {
  x = digitalRead(2);
  if (x==HIGH){
    digitalWrite(13,HIGH);
  }
  else{
    digitalWrite(13,LOW);
    }
    delay(1000);
}

