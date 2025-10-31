#include <stdio.h>
#include <stdint.h>

typedef union {
	uint16_t data;
	struct {
		uint8_t BIT0 : 1;
		uint8_t BIT1 : 1;
		uint8_t BIT2 : 1;
		uint8_t BIT3 : 1;
		uint8_t BIT4 : 1;
		uint8_t BIT5 : 1;
		uint8_t BIT6 : 1;
		uint8_t BIT7 : 1;
	}BITS;	
	uint8_t data2;
	struct {
		uint8_t BIT0 : 1;
		uint8_t BIT1 : 1;
		uint8_t BIT2 : 1;
		uint8_t BIT3 : 1;
		uint8_t BIT4 : 1;
		uint8_t BIT5 : 1;
		uint8_t BIT6 : 1;
		uint8_t BIT7 : 1;

	}BITS2;
}_8BIT;

_8BIT anhba ; //00000000

int main() {
	anhba.BITS.BIT4 = 1;
	anhba.BITS2.BIT0 = 1;
	printf("%d", anhba);
	printf("size %d", sizeof(anhba));
	return 0;
}