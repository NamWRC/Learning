# 1 "D:\\Hex\\sketch_sep24a\\sketch_sep24a.ino"
int x = 0;

void setup() {
  pinMode(2,0x0);
  pinMode(13,0x1);
}

void loop() {
  x = digitalRead(2);
  if (x==0x1){
    digitalWrite(13,0x1);
  }
  else{
    digitalWrite(13,0x0);
    }
    delay(1000);
}
