#pragma warning(disable:4996)

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void Matrix(int** A, int** B, int row_A, int col_A, int row_B, int col_B)
{

	for (int i = 0; i < row_A; i++) {
		for (int j = 0; j < col_A; j++) {
			printf("A행렬의 %d행 %d열은?", i + 1, j + 1);
			scanf("%d", &A[i][j]);
		}
	}

	for (int i = 0; i < row_B; i++) {
		for (int j = 0; j < col_B; j++) {
			printf("B행렬의 %d행 %d열은?", i + 1, j + 1);
			scanf("%d", &B[i][j]);
		}
	}

}