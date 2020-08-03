#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void add(int* a) {

	*a += *a;
	printf("%d\n", *a);
}



int main() {
	int a;
	printf("숫자를 입력하시오 : ");
	scanf("%d", &a);
	add(&a);
	printf("%d", a);


	return 0;
}