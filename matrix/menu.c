#include "cursor.h"

#include <stdbool.h>

int MainMenu()
{
	int x = 2;
	int y = 0;

	printf("> ��� ����� \n");
	printf("  ���");

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

	printf("> ���ϱ� \n");
	printf("  ���� \n");
	printf("  ���ϱ� \n");
	printf("  ����");

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