#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "RUS");

	int k;
	printf("Введите количество ошибок k (k < 20):\n");
	scanf("%d", &k);

	switch (k) {
	case 1:
		printf("В программе найдена %d ошибка\n", k);
		break;
	case 2:
	case 3:
	case 4:
		printf("В программе найдено %d ошибки\n", k);
		break;
	default:
		printf("В программе найдено %d ошибок\n", k);
	}
	return 0;
}