#include <stdio.h>
#include <stdint.h>

uint8_t data = 0x8; //00001000;

int main() {
	data |= ~(1 << 3);
	//00000001
	//00001000 : số 8 | 00000000 => 00001000 

	data &= ~(1 << 3);
	//00001000
	//11110111
	//khi and xong thì ra 00000000
	return 0;

}