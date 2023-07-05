#include "cursor.h"

#include <stdbool.h>

int MainMenu()
{
	int x = 2;
	int y = 0;

	printf("> 행렬 만들기 \n");
	printf("  취소");

	while (true) {
		int key = ControlKey();

		switch (key) {
		case UP:
			if (y > 0) {
				MoveCursor(x - 2, y);
				printf(" ");
				MoveCursor(x - 2, --y);
				printf(">");
			}
			break;

		case DOWN:
			if (y < 1) {
				MoveCursor(x - 2, y);
				printf(" ");

				MoveCursor(x - 2, ++y);
				printf(">");
			}
			break;

		case ENTER:
			system("cls");
			return y;
		}
	}
}

int CalculateMenu()
{
	int x = 2;
	int y = 0;

	system("cls");

	printf("> 더하기 \n");
	printf("  빼기 \n");
	printf("  곱하기 \n");
	printf("  이전");

	while (true) {
		int key = ControlKey();

		switch (key) {
		case UP:
			if (y > 0) {
				MoveCursor(x - 2, y);
				printf(" ");
				MoveCursor(x - 2, --y);
				printf(">");
			}
			break;

		case DOWN:
			if (y < 3) {
				MoveCursor(x - 2, y);
				printf(" ");

				MoveCursor(x - 2, ++y);
				printf(">");
			}
			break;

		case ENTER:
			system("cls");
			return y;
		}
	}
}