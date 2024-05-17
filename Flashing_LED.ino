// A program to make a red LED flash
void setup() {
  // pin selection
 pinMode (13, OUTPUT) ; // Designates pin 13 as an output
}

void loop() {
  digitalWrite(13, HIGH) ; // Turns the LED on using high voltage
  delay(1000) ; // Waits 1 second
  digitalWrite (13, LOW) ; // Turns the LED off using low voltage
  delay(1000) ; // Waits 1 second
}
