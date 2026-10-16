#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    setlocale(LC_ALL, "Russian");

    char c = '!';
    int i = 2;
    float f = 3.14f;
    double d = 5e-12;


    puts("Введите символ (char):");
    scanf(" %c", &c);

    puts("Введите целое число (int):");
    scanf("%d", &i);

    puts("Введите вещественное число (float):");
    scanf("%f", &f);

    puts("Введите число двойной точности (double):");
    scanf("%lf", &d);


    puts("\n--- Основные переменные ---");
    printf("char c = %c\n", c);
    printf("int i = %d\n", i);
    printf("float f = %f\n", f);
    printf("double d = %le\n", d);

    puts("\n--- Задачи 1а, 1б, 1в ---");
    printf("1а) Число целиком: %f, его целая часть без дроби: %.0f\n", f, f);
    printf("1б) Символ: %c, его код в десятичной системе: %d\n", c, c);
    printf("1в) 1 / %d = %f\n", i, 1.0 / i);

    getchar();

    return 0;
}
