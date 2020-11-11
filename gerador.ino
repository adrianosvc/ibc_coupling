String message = "0101001100001111";

void setup() {
        pinMode(LED_BUILTIN, OUTPUT); // pin 13
        pinMode(12, OUTPUT);
	digitalWrite(LED_BUILTIN,LOW);
	digitalWrite(12,HIGH);
}

void loop() {
        int i, n;

        digitalWrite(12, LOW);

	for (n = 0; n < 16; n++) {
		if (message[n] == '0') {
			digitalWrite(LED_BUILTIN,LOW);
		} else {
			digitalWrite(LED_BUILTIN,HIGH);
		}
		delay(1);
	}
        
	digitalWrite(12, HIGH);
	delay(16);
}
