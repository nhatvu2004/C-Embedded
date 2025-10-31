#include <stdio.h>
#include <stdint.h>

// reg.h
// 
// 
// nguyên mẫu hàm
void reg1();
void reg2();
void reg3();


void reg1() {
	printf("reg1 \n");
}
void reg2() {
	printf("reg2 \n");
}
void reg3() {
	printf("reg3 \n");
}
#define CNT 3 //counter

void (*mfunction[CNT])() = {reg1, reg2, reg3};

int main() {
	for (int i = 0; i < CNT; i++) {
		mfunction[i]();
	}
	return 0;
}