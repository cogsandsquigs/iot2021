SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);

// declaring color consts
const uint16_t red = D5;
const uint16_t green = D6;
const uint16_t blue = D7;

void setup()
{
	pinMode(red, OUTPUT);
	pinMode(green, OUTPUT);
	pinMode(blue, OUTPUT);
}

void loop()
{
	delay(1000);

	// this chunk resets all LEDs so that we can start fresh.
	analogWrite(red, 0);
	analogWrite(green, 0);
	analogWrite(blue, 0);

	// all the analogWrites to 0 reset certain color channels
	// so they don't interfere with other colors

	// red
	analogWrite(red, 255);

	delay(1000);

	analogWrite(red, 0);

	// green
	analogWrite(green, 255);

	delay(1000);

	analogWrite(green, 0);

	// blue
	analogWrite(blue, 255);

	delay(1000);

	analogWrite(blue, 0);

	// orange
	analogWrite(red, 255);
	analogWrite(green, 64);

	delay(1000);

	// yellow
	analogWrite(green, 128);

	delay(1000);

	analogWrite(green, 0);

	// purple
	analogWrite(blue, 255);

	delay(1000);

	analogWrite(red, 0);

	// cyan
	analogWrite(green, 255);
}
