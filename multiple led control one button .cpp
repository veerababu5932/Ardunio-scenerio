const int ledPins[] = {8, 9, 10};  // Array of LED pins
const int buttonPin = 7;
int buttonState;
int lastButtonState = LOW;
int currentLed = 0;  // Track which LED is currently on

void setup() {
  for (int i = 0; i < 3; i++) {
    pinMode(ledPins[i], OUTPUT);  // Set each LED pin as an output
  }
  pinMode(buttonPin, INPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);  // Read the button state

  if (buttonState == HIGH && lastButtonState == LOW) {
    // Turn off the previous LED
    digitalWrite(ledPins[currentLed], LOW);

    // Move to the next LED
    currentLed++;
    if (currentLed > 2) {
      currentLed = 0;  // Loop back to the first LED
    }

    // Turn on the new LED
    digitalWrite(ledPins[currentLed], HIGH);
  }

  lastButtonState = buttonState;  // Save the last button state
}
