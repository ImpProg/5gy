#include <stdio.h>

#ifndef SIZE
#define SIZE 5
#endif

int main() {
	int array[SIZE];
	
	printf("Array size: %d\n", sizeof(array) / sizeof(array[0]));
		
	return 0;
}