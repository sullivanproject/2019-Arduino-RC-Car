int ledPin = 10;

void setup() {
  pinMode(ledPin, OUTPUT);

  int bright = 0;
  for(bright = 0; bright <= 255; bright++) {
    analogWrite(ledPin, bright);
    delay(10);
  }
}

void loop() {
  
}
