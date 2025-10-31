#include <stdio.h>
#include <stdint.h>

void view(uint8_t x);
void viewx2(uint8_t x);

void view(uint8_t x) {
	printf("%d\n", x);
}
void viewx2(uint8_t x) {
	printf("%d\n", x*2);
}

typedef void (*mFunction)(uint8_t);

int main() {
	uint64_t address;
	printf("add = %p\n", address = (uint64_t)view); //address có địa chỉ của thằng view
	uint64_t address2;
	printf("add = %p\n", address2 = (uint64_t)viewx2); //address có địa chỉ của thằng view
	((mFunction)address2)(4);
	((mFunction)address)(5);
	mFunction m;
	mFunction n;
	m = view;
	m(2);
	n = viewx2;
	n(2);

	return 0;
}