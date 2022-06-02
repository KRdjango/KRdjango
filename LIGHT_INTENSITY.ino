int K = 5;
int a = 0;

void setup() {
  pinMode(5, OUTPUT); // LED control pin is 3, a PWM capable pin
}

void loop() {
  for (a = 0 ; a < 256 ; a++) {
    analogWrite(5, a);

  }
  for (a = 255 ; a >= 0 ; a--) {
    analogWrite(5, a);
 
  }
  delay(200);
}
