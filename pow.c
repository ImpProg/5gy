#include <stdio.h>

unsigned int power(unsigned int p, unsigned int k) {
	if (k == 0) {
		return 1;
	} else if (k % 2 == 0) {
		return power(p * p, k / 2);
	} else {
		return p * power(p * p, (k - 1) / 2);
	}
}

int main() {
	
	printf("%d\n", power(3, 2));
	
	return 0;
}