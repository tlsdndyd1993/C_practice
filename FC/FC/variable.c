#define CRT_SECURE_NO_WARNINS
#include <stdio.h>
int a = 100;
void process() {
	static int a = 7;
	a = a + 1;
	printf("%d\n", a);
}

int main() {
	printf("%d", a);

	process();
	return 0;
}