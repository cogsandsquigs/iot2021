/*
* This program reads from pin A5 and adjusts
* the flashing of the LED according to the voltage.
* It also outputs the voltage read to serial.
*/

SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);

void setup()
{
  pinMode(D5, OUTPUT);
  Serial.begin(9600); // begins serial output
}

void loop()
{
  uint16_t voltage = analogRead(A5); // reads voltage from pin A5
  Serial.println(voltage);           // prints to serial
  // blinking time
  digitalWrite(D5, HIGH);
  delay(voltage);
  digitalWrite(D5, LOW);
  delay(voltage);

  /*
  * I could've made it so that it adjusts more smoothly
  * by re-reading the input value from pin A5 on every delay, 
  * but that would have made printing to serial a bit more
  * tricky and I'm a lazy dev. :P
  */
}