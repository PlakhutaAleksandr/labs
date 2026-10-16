#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#define D 2.54
#define D_SPAN 2.32166
#define D_LIT 2.7076
int main() {
	setlocale(LC_ALL, "RUS");
	int dym=0;
	float res_eng;
	float res_span;
	float res_lit;

	puts("¬ведите количество дюймов");
	scanf("%d", &dym);
	res_eng = D * dym;
	res_span = D_SPAN * dym;
	res_lit = D_LIT * dym;
	printf("%d дюймов Ц это %.2f см\n", dym, res_eng);
	printf("%d дюймов Ц это %.10f испанских пульгадов\n", dym, res_span);
	printf("%d дюймов Ц это %.2f старолитовских см\n", dym, res_lit+20);
	getchar();
	return 0;
}
