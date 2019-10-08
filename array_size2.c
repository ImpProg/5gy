#include <stdio.h>

#define GET_ARRAY_SIZE(arr) (sizeof(arr) / sizeof(arr[0]))

int main() {
	
	int x[] = {1, 2, 45, -1, 0, 34};
	printf("%d\n", GET_ARRAY_SIZE(x));
	
	return 0;
}