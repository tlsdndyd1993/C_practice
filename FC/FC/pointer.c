#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//1.행렬의 크기 설정
//2.행렬 값 수정

int main() {
	int row, col;
	printf("행과 열의 크기를 입력하세요 : ");
	scanf("%d %d", &row, &col);
	//2차원 행렬 메모리 할당하기
	int** p = (int**)malloc(sizeof(int*)*row);

	for (int i = 0; i < row; i++) {
		p[i] = (int*)malloc(sizeof(int) * col);
	}
	//행렬에 0부터 차례대로 숫자 넣기
	for (int j = 0; j < row; j++) {
		for (int k = 0; k < col; k++) {
			p[j][k] = col * j + k;
			printf("%d ", p[j][k]);
		}
		printf("\n");
	}
	
	int c_row, c_col;
	int num;

	printf("행과 열을 선택하세요 : ");
	scanf("%d %d", &c_row, &c_col);
	printf("넣을 숫자를 적으세요 : \n");
	scanf("%d", &num);
	if (c_row < row && c_col < col) {
		p[c_row - 1][c_col - 1] = num;
	}
	else {
		printf("지정한 행과 열을 벗어납니다.");
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