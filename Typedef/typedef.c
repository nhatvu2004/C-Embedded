#include <stdio.h>

typedef unsigned char uint8_t;
typedef struct {
	int age;

}mystruct;
//struct lúc này không phải là 1 kiểu dữ liệu
uint8_t a = 1;

struct mystruct2 {
	int age;

}m;
//struct lúc này không phải là 1 kiểu dữ liệu
int main() {
	mystruct m;

	printf("a = %d", a);
	m.age = 5;
	//mystruct m; // cái này sai nên ta sẽ dùng typedef

}