Servo myservo

int pos = 0;
int pin = 9;

void setup():
  myservo.attach(pin);
void loop(){
  for (pos = 0; pos <= 180; pos += 1) {
    myservo.write(pos);
    delay(15);
  }
  for (pos = 180; pos >= 0; pos -= 1) {
    delay(15);
  }
}
