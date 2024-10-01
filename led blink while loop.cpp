In this example, the LED will blink continuously until a certain condition is met (e.g., it blinks 5 times and then stops).
int ledPin = 13; // LED connected to pin 13
int blinkCount = 0; // Counter for blinking

void setup() {
  pinMode(ledPin, OUTPUT); // Set LED pin as output
}

void loop() {
  while (blinkCount < 5) { // Blink LED 5 times
    digitalWrite(ledPin, HIGH); // Turn LED on
    delay(500); // Wait for 500 milliseconds
    digitalWrite(ledPin, LOW);  // Turn LED off
    delay(500); // Wait for 500 milliseconds
    
    blinkCount++; // Increment blink count
  }
  
  // Do nothing after blinking 5 times
  while(true); // Infinite loop to stop further execution
}
