#include <stdio.h>

int missing(int t[], int n) {
	int sum = 0;
	int total = n * (n + 1) / 2;
	
	for (int i = 0; i < n - 1; ++i) {
		sum += t[i];
	}
	
	return total - sum;
}

int main() {
	int array[] = {1, 4, 6, 5, 2};
	printf("Missing number: %d\n", missing(array, 6));
	
	return 0;
}