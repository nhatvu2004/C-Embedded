#include <stdio.h>

int main() {
	int arr[] = { 1,2,3,4,5 };
	int* ptr;
	ptr = &arr[0];
	printf("%d %d %d %d %d %d", *ptr, ++*ptr++, (*ptr)++, *ptr++, *++ptr, ++*ptr);

	int x = 10;
	printf("%d %d\n", x, ++x);

	int* ptre;
	ptre = &x;
	printf("%d %\n", ++ * ptre);
	printf("%d %\n", *ptre);


	return 0;
}