int n = 1, i = 0;

void setup () {
	noInterrupts();
	pinMode(13, OUTPUT);
}

void loop () {
	asm(
		"push r30 \n"    //save r30/31 on stack
		"push r31 \n"
		"ldi r30,0x00\n" //zeroize r30/31 for use in recursion
		"ldi r31,0x00\n"
		"push r18 \n"
	);
	for (i = 0; i <= 7; i++) {
		if (i != 0)
			n = n * i;
	}
	asm(
		"push r30 \n"    //save r30/31 on stack
		"push r31 \n"
		"ldi r30,0x00\n" //zeroize r30/31 for use in recursion
		"ldi r31,0x00\n"
		"push r18 \n"
	);
	/*if (n == 24) {
		digitalWrite(13, HIGH);
	}*/
}