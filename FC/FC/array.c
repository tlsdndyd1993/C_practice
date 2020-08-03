#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int a[2][3][3] = { { {1,2,3},{4,5,6},{7,8,9}},
					{{10,11,12},{13,14,15},{16,17,18}}};

int main() {
	int i, j, k;
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			for (k = 0; k < 3; k++) {
				printf("%d",a[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}

	return 0;
}