// this is the lab for lab 1, hello world
// LED at pin D5 blinks at a freq. of 1hz

SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);

void setup()
{
	pinMode(D5, OUTPUT);
}

void loop()
{
	digitalWrite(D5, HIGH);
	delay(1000);
	digitalWrite(D5, LOW);
	delay(1000);
}