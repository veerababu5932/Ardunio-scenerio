const int segmentPins[] = {2, 3, 4, 5, 6, 7, 8}; // a, b, c, d, e, f, g
const int buttonPin = 9;
int number = 0;
int lastButtonState = LOW;
int currentButtonState;

byte numbers[10][7] = {
  {1, 1, 1, 1, 1, 1, 0},  // 0
  {0, 1, 1, 0, 0, 0, 0},  // 1
  {1, 1, 0, 1, 1, 0, 1},  // 2
  {1, 1, 1, 1, 0, 0, 1},  // 3
  {0, 1, 1, 0, 0, 1, 1},  // 4
  {1, 0, 1, 1, 0, 1, 1},  // 5
  {1, 0, 1, 1, 1, 1, 1},  // 6
  {1, 1, 1, 0, 0, 0, 0},  // 7
  {1, 1, 1, 1, 1, 1, 1},  // 8
  {1, 1, 1, 0, 0, 1, 1}   // 9
};

void setup() {
  for (int i = 0; i < 7; i++) {
    pinMode(segmentPins[i], OUTPUT); // Set segment pins as output
  }
  pinMode(buttonPin, INPUT_PULLUP);  // Set button pin with internal pull-up
  displayNumber(number);             // Display initial number
}

void loop() {
  currentButtonState = digitalRead(buttonPin);

  if (currentButtonState == LOW && lastButtonState == HIGH) {
    number = (number + 1) % 10;      // Increment number, reset to 0 after 9
    displayNumber(number);
    delay(200); // Debounce delay
  }
  lastButtonState = currentButtonState;
}

void displayNumber(int num) {
  for (int i = 0; i < 7; i++) {
    digitalWrite(segmentPins[i], numbers[num][i]); // Set segment states using a for loop
  }
}
