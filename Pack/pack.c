#include <stdint.h>
#include <stdio.h>
#pragma pack(push,1)
typedef struct {
	uint32_t header;
	uint8_t cnt;
}MEM_Typedef;
#pragma pack(pop)
typedef struct {
	uint32_t header;
	uint8_t cnt;
}MEM_Typedef2;
MEM_Typedef x;

int main() {
	printf("%d \n", sizeof(x));
	printf("%d \n", sizeof(MEM_Typedef2));

}