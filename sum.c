#include <stdio.h>

#define SUM(x,y) ((x) + (y))
#define MUL(x, y) ((x) * (y))

int main() {
	int x = 0;
	printf("%d\n", SUM(1, 2));
	printf("%d\n", SUM(x, 2));
	printf("%d\n", SUM(2 - 1, 3 - 2));
	printf("%d\n", MUL(1 + 1, 1 + 1));
	
	return 0;
}