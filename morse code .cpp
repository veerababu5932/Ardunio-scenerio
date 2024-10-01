int ledPin = 13; // LED connected to digital pin 13

void setup() {
  pinMode(ledPin, OUTPUT); // Set the LED pin as an output
}

void loop() {
  // Morse code for SOS: ... --- ...
  
  // S (3 short blinks)
  for (int i = 0; i < 3; i++) {
    digitalWrite(ledPin, HIGH);
    delay(250); // Short blink duration
    digitalWrite(ledPin, LOW);
    delay(250); // Short pause between blinks
  }
  
  delay(1000); // Pause between letters (S and O)

  // O (3 long blinks)
  for (int i = 0; i < 3; i++) {
    digitalWrite(ledPin, HIGH);
    delay(750); // Long blink duration
    digitalWrite(ledPin, LOW);
    delay(250); // Short pause between blinks
  }

  delay(1000); // Pause between letters (O and S)

  // S (3 short blinks)
  for (int i = 0; i < 3; i++) {
    digitalWrite(ledPin, HIGH);
    delay(250); // Short blink duration
    digitalWrite(ledPin, LOW);
    delay(250); // Short pause between blinks
  }

  delay(2000); // Pause before repeating the SOS signal
}
