#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {


	int c_len;
	printf("���ڿ��� ���̸� ���ϼ��� : ");
	scanf("%d", &c_len);
	getchar();
	printf("\n");

	char* str = (int*)malloc(sizeof(char) * c_len);
	printf("���ڿ� �Է� :");
	scanf("%[^\n]s", str);

	char* array[10] = { NULL, };

	char* ptr = strtok(str, " ");


	int i = 0;
	while (ptr != NULL) {
		array[i] = ptr;
		i++;
		ptr = strtok(NULL," ");
	}

	for (int j = 0; j < 10; j++) {
		printf("%s\n", array[j]);
	}

	free(str);

	return 0;
}