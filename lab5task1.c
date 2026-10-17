#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES 
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#define M_PI 3.14159265358979323846
int main() {

    setlocale(LC_ALL, "Russian");
    float gr = 0.0f;

    puts("Введите градус:");
    scanf("%f", &gr);

    printf("Результат: sin(%.1f град) = %.6f\n", gr, sin(gr * M_PI / 180));

    getchar();

    return 0;
}