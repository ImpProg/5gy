#include <stdio.h>

#define TRUE (1 == 1)
#define FALSE (1 == 0)
#define BOOL int

BOOL div(int x, int y) {
	if (y % x == 0) {
		return TRUE;
	} else {
		return FALSE;
	}
}

int main() {
	printf("%d\n", div(2, 4));
	
	return 0;
}