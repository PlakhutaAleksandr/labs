#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main()
{
puts("Моя программа");
setlocale(LC_CTYPE, "RUS");
puts("Нажмите Enter для продолжения...");
getchar();
puts("Продолжение программы");
return 0;

}
