#include <stdio.h>
#include <stdlib.h> 
#include <locale.h>
int main()
{
	setlocale(LC_CTYPE, "RUS");
	printf("%10d\n%10d\n\n+%0*d.%0*d",
		3,
		2333,
		3, 0,
		5, 129);
	return 0;
}
