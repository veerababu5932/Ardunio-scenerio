int ledPin = 13; // LED connected to digital pin 13

void setup() {
  pinMode(ledPin, OUTPUT); // Set the LED pin as an output
}

void loop() {
  digitalWrite(ledPin, HIGH); // Turn the LED on
  delay(200);                 // Wait for 200 milliseconds
  digitalWrite(ledPin, LOW);  // Turn the LED off
  delay(200);                 // Wait for 200 milliseconds
}
