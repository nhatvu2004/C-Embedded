#include <stdio.h>
#include <stdint.h>

void mFunction(void* ptr, uint8_t size) {
	if (size == 1) {
		uint8_t* p8;
		p8 = (uint8_t*)ptr;
		*p8 = 0x12; //1byte


	}
	if (size == 2) {
		uint16_t* p16;
		p16 = (uint16_t*)ptr;
		*p16 = 0x0806;
	}
}

int main() {
	uint8_t a;
	uint8_t* ptra = &a;
	mFunction(ptra, 1);
	uint16_t b;
	uint16_t* ptrb = &b;
	mFunction(ptrb, 2);

	printf("%x\n", a);
	printf("%x", b);

}