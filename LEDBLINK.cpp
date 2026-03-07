// C++ code
// This code is a simple Arduino sketch that blinks the built-in
// LED on and off every 500 milliseconds. The `setup()` function
// initializes the LED pin as an output, and the `loop()` function
// continuously turns the LED on and off with a delay in between.
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(500); // Wait for 500 millisecond(s)
}