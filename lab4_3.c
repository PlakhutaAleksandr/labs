#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{

    setlocale(LC_ALL, "Russian");

    int n;
    int a, b, c;

    printf("Введите трехзначное число:");
    scanf("%d", &n);
    a = n / 100;
    b = n / 10 % 10;
    c = n % 10;
    printf("Первая цифра значения: %d,последняя цифра значения:%d, сумма цифр значения %d, значение наобоот: %d%d%d", a, c, a + b + c, c, b, a);

    getchar();

    return 0;
}