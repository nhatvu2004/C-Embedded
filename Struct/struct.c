#include <stdio.h>
#include <stdint.h>

typedef struct {
	int x; 
	int y;
	int z;
}StructType;

typedef struct {
	uint8_t x;
	int y;
	uint8_t z;
}StructT;


struct anhba {
	int anhba;
	float b;
	int c;
};

struct anhba tram ;


StructType p = {5,6.0,7};
StructType d;

StructType* ptr;

int main() {
	tram.anhba = 5;
	printf("%d\n", p.x);
	printf("%d\n", tram.anhba);
	ptr = &d;
	printf("a = %d\n", ptr->x = 6);
	printf("%d",sizeof(tram.anhba));
	printf("%d", sizeof(StructT));

	
}