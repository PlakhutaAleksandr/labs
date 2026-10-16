#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
	setlocale(LC_ALL, "RUS");
	float a;
	float b;
	puts("¬ведите число a:");
		scanf("%f", &a);
	puts("¬ведите число b:");
	scanf("%f", &b);
	printf(" ----------------------------- \n");
	printf("|   a*b   |   a+b   |   a-b   |\n");
	printf("|---------|---------|---------|\n");
	printf("|   %.0f*%.0f   |   %.0f+%.0f   |   %.0f-%.0f   |\n", a, b, a, b, a, b);
	printf("|    %.0f   |    %.0f    |    %.0f    |\n", a * b, a + b, a - b);
	getchar(); 
	return 0;
}

