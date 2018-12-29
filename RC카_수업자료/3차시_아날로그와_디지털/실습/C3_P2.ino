int ledPin = 10;

int bright = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  for(bright = 0; bright <= 255; bright++) {
    analogWrite(ledPin, bright);
    delay(10);
  }

  delay(1000);

  for(; bright >= 0; bright--) {
    analogWrite(ledPin, bright);
    delay(10);
  }

  delay(1000);
}
