#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {

	int number;
	char* name;

	char a[40];

	name = (char*)malloc(sizeof(char) * 30);

	scanf("%d %s", &number, name);

	sprintf(a, "%dth %s", number, name);

	printf("%s", a);


	free(name);


	return 0;
}