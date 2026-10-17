#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES 
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#define K 7.0
int main() {

    setlocale(LC_ALL, "Russian");
    double x = 0.0;
    double a = 0.0;
    double b = 0.0;
    double y = 0.0;

    puts("Введите значение x:");
    scanf("%lf", &x);

    a = pow(K + x, 3.0);
    b = log10(fabs(K * x));
    y = pow(b, 2.0) + sqrt(fabs(a));

    puts("\n--- Результаты вычислений ---");
    printf("Значение x = %lf\n", x);
    printf("Значение y = %.3lf\n", y);

    getchar();

    return 0;
}