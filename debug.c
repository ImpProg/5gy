#include <stdio.h>

#define DEBUGGER printf("File: %s, function: %s, line: %d, time: %s\n", __FILE__, __FUNCTION__, __LINE__, __TIME__)

void f() {
	#ifdef DEBUG
		DEBUGGER;
	#endif
}

int main() {
	f();
	return 0;
}