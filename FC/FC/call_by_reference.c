#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void add(int* a) {

	*a += *a;
	printf("%d\n", *a);
}



int main() {
	int a;
	printf("���ڸ� �Է��Ͻÿ� : ");
	scanf("%d", &a);
	add(&a);
	printf("%d", a);


	return 0;
}