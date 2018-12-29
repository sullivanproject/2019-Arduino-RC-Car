int ledPin = 10;
int buttonPin = 9;

int bright = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  int buttonValue = digitalRead(buttonPin);

  if(buttonValue == HIGH) {
    bright++;
    if(bright > 255)
      bright = 255;
  }
  else {
    bright--;
    if(bright < 0)
      bright = 0;
  }
  
  analogWrite(ledPin, bright);

  delay(10);
}
