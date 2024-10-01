Multiple LEDs Blinking in Sequence
const int ledPins[] = {8, 9, 10};  // Pins connected to LEDs

void setup() {
  for (int i = 0; i < 3; i++) {
    pinMode(ledPins[i], OUTPUT);  // Set each LED pin as an output
  }
}

void loop() {
  for (int i = 0; i < 3; i++) {
    digitalWrite(ledPins[i], HIGH);  // Turn each LED on
    delay(500);                      // Wait 500 milliseconds
    digitalWrite(ledPins[i], LOW);   // Turn the LED off
    delay(500);                      // Wait before the next LED turns on
  }
}
