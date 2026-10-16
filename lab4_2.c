
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {

    setlocale(LC_ALL, "Russian");


    int a = 11;
    int b = 3;
    int x = 0;
    float y = 0.0f;
    double z = 0.0;

    x = a / b;
    y = a / b;
    z = a / b;

   
    printf("x (int) = %d\n", x);
    printf("y (float) = %f\n", y);
    printf("z (double) = %lf\n", z);

    printf("int = % d\n", (int)a / b);
    printf("float = %f\n", (int)a / b);
    printf("double = %f\n", (int)a / b);


    getchar();

    return 0;
}