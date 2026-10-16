#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
	setlocale(LC_ALL, "RUS");
	int num1;
	int	num2;
	puts("Введите первое целое число");
	scanf("%d", &num1);
	printf("Введено число A");
	
	puts("Введите второе целое число");
	scanf("%d", &num2);
	printf("Введено число B");


	printf("Сумма: %d + %d = %d\n", num1, num2, num1 + num2);
	printf("Разность: %d - %d = %d\n", num1, num2, num1 - num2);
	printf("Произведение: %d - %d = %d\n", num1, num2,num1 - num2);
	printf("Частное: %d / %d =%d\n", num2, num1, num2 / num1);
	printf("Остаток от деления: %d %% %d =%d\n", num2, num1, num2 % num1);

	getchar();

	return 0;

}