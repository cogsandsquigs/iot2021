SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);

const uint16_t out = D6; // output pin
const uint16_t in = D7; // input pin

void setup()
{
  pinMode(out, OUTPUT);
  pinMode(in, INPUT);
}

void loop()
{
  if (digitalRead(in) == 1) // if the digital input is HIGH, set out to HIGH
  {
    digitalWrite(out, HIGH);
  }
  else
  {
    digitalWrite(out, LOW);
  }
}