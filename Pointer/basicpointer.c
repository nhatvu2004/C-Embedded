#include <stdio.h>
#include <stdint.h>
uint8_t x = 15;

uint8_t* ptr = &x;
// lấy giá trị con trỏ trỏ tới -> *ptr: giá trị mà con trỏ trỏ tới
//40 byte
typedef struct {
	int a;
	int b;
	int c;
	int e; 
	int f;
	int g;
	int x;
	int y;
	int k;
	int j;
}Reg;

Reg re;

Reg* ptr2;

uint8_t aay[8] = { 1, 2, 3, 4, 5, 6, 7, 8};
uint8_t* ptr8;
uint32_t* ptr32;



void mPrintf1(uint8_t x) 
{
	printf("%d", x);
}
void mPrintf2(uint8_t *ptr)
{
	printf("%d", *ptr);
}
int main()
{	
	ptr8 = &aay[0];
	ptr32 = (uint32_t*)&aay[0];
	ptr8++;
	ptr32++;
	printf("Dia chi cua x: 0x%x\n", &x);
	printf("Gia tri con tro x: %d\n", *ptr);
	mPrintf1(x);
	printf("\n");
	mPrintf2(ptr);
	printf("\n");
	printf("size %d\n", sizeof(ptr2));
	printf("size %d\n", sizeof(re));
	printf("%d\n", *ptr8);
	printf("%x", *ptr32);
	
}