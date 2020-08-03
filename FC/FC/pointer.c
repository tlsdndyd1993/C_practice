#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//1.����� ũ�� ����
//2.��� �� ����

int main() {
	int row, col;
	printf("��� ���� ũ�⸦ �Է��ϼ��� : ");
	scanf("%d %d", &row, &col);
	//2���� ��� �޸� �Ҵ��ϱ�
	int** p = (int**)malloc(sizeof(int*)*row);

	for (int i = 0; i < row; i++) {
		p[i] = (int*)malloc(sizeof(int) * col);
	}
	//��Ŀ� 0���� ���ʴ�� ���� �ֱ�
	for (int j = 0; j < row; j++) {
		for (int k = 0; k < col; k++) {
			p[j][k] = col * j + k;
			printf("%d ", p[j][k]);
		}
		printf("\n");
	}
	
	int c_row, c_col;
	int num;

	printf("��� ���� �����ϼ��� : ");
	scanf("%d %d", &c_row, &c_col);
	printf("���� ���ڸ� �������� : \n");
	scanf("%d", &num);
	if (c_row < row && c_col < col) {
		p[c_row - 1][c_col - 1] = num;
	}
	else {
		printf("������ ��� ���� ����ϴ�.");
	}	

	for (int j = 0; j < row; j++) {
		for (int k = 0; k < col; k++) {			
			printf("%d", p[j][k]);
		}
		printf("\n");
	}


	for (int f = 0; f < row; f++) {
		free(p[f]);
	}
	free(p);
}