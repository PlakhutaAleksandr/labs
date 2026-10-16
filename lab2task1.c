#include <stdio.h>
#include <stdlib.h> 
#include <locale.h>
int main()
{
	setlocale(LC_CTYPE, "RUS");

	printf("123\n");
	printf("1\n2\n3\n");
	printf("1\n\t2\n\t\t3\n");
	printf("%1d\n", 1);
	printf("%2d\n", 2);
	printf("%3d\n", 3);
	printf("%4d\n", 4);
    printf("%10.3f\n ", 12.234657);
	printf("Остаток от деления %d на %d равен %d\n ", 5, 2, 5 % 2);
	printf("%d умножить на %d равно %d\n", 2000, 4, 2000 * 4);
	printf("Остаток от деления %d на %d равен %d\n ", 7, 4, 7 % 4);
	printf("%g разделить %e равно %f\n",
		5.0, 2000000.0, 5.0 / 2000000.0);
	return 0;


}