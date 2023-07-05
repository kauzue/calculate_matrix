#pragma warning(disable:4996)

#include "math.h"
#include "menu.h"

#include <stdlib.h>

enum MAIN { MATRIX, EXIT };
enum CACULATION {PLUS, MINUS, MULTIPLY, BACK};

int main(void) {
	int row_A, col_A, row_B, col_B;
	int key = 0;

	while (key > -1) {

		key = MainMenu();

		switch (key) {
		case MATRIX: {
			printf("행렬 A : ");
			scanf("%d, %d", &row_A, &col_A);

			printf("행렬 B : ");
			scanf("%d, %d", &row_B, &col_B);

			int** A = (int**)malloc(sizeof(int*) * row_A);
			for (int i = 0; i < row_A; i++) {
				A[i] = (int*)malloc(sizeof(int) * col_A);;
			}

			int** B = malloc(sizeof(int*) * row_B);
			for (int i = 0; i < row_B; i++) {
				B[i] = malloc(sizeof(int*) * col_B);
			}

			Matrix(&(*A), &(*B), row_A, col_A, row_B, col_B);

			while (key > -1) {

				key = CalculateMenu();

				switch (key) {
				case PLUS: {
					if (row_A == row_B && col_A == col_B) {
						int n = row_A;
						int m = col_A;

						int** C = (int**)malloc(sizeof(int*) * n);
						for (int i = 0; i < n; i++) {
							C[i] = (int*)malloc(sizeof(int) * m);;
						}

						for (int i = 0; i < n; i++) {
							for (int j = 0; j < m; j++) {
								C[i][j] = A[i][j] + B[i][j];
							}
						}

						for (int i = 0; i < n; i++) {
							for (int j = 0; j < m; j++) {
								printf("%d ", C[i][j]);
							}
							printf("\n");
						}
						system("pause");
					}

					else {
						printf("두 행렬은 더하기를 할 수 없습니다.");
						system("pause");
					}
					break;
				}

				case MINUS: {
					if (row_A == row_B && col_A == col_B) {
						int n = row_A;
						int m = col_A;

						int** C = (int**)malloc(sizeof(int*) * n);
						for (int i = 0; i < n; i++) {
							C[i] = (int*)malloc(sizeof(int) * m);;
						}

						for (int i = 0; i < n; i++) {
							for (int j = 0; j < m; j++) {
								C[i][j] = A[i][j] - B[i][j];
							}
						}

						for (int i = 0; i < n; i++) {
							for (int j = 0; j < m; j++) {
								printf("%d ", C[i][j]);
							}
							printf("\n");
						}
						system("pause");
					}

					else {
						printf("두 행렬은 빼기를 할 수 없습니다.");
						system("pause");
					}
					break;
				}

				case MULTIPLY: {
					if (col_A == row_B) {
						int n = row_A;
						int m = col_B;

						int** C = (int**)malloc(sizeof(int*) * n);
						for (int i = 0; i < n; i++) {
							C[i] = (int*)malloc(sizeof(int) * m);;
						}

						for (int i = 0; i < n; i++) {
							for (int j = 0; j < m; j++) {
								C[i][j] = 0;
								for (int k = 0; k < col_A; k++) {
									C[i][j] += A[i][k] * B[k][j];
								}
							}
						}

						for (int i = 0; i < n; i++) {
							for (int j = 0; j < m; j++) {
								printf("%d ", C[i][j]);
							}
							printf("\n");
						}
						system("pause");
					}

					else {
						printf("두 행렬은 곱하기를 할 수 없습니다.");
						system("pause");
					}
					break;
				}

				case BACK: {
					key = -1;
					break;
				}

				}

			}

			key = 0;
			break;
		}

		case EXIT: {
			return 0;
		}
		}

	}


	return 0;
}