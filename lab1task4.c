#include <stdio.h>
#include <locale.h>
void name()
{
	setlocale(LC_ALL, "RUS");
	puts("*********************************************");
	puts("*                                           *");
	puts("*  тема: Разработка консольного приложения  *");
	puts("*                                           *");
	puts("*     Выполинил Плахута А.А.                *");
	puts("*                                           *");
	puts("*********************************************");
	getchar();

	return 0;
}
void date()
{
	setlocale(LC_ALL, "RUS");
	puts(" __   __   __  __    __  __ ");
	puts(" _|   _|  | | |_|   | | |_|");
	puts("|_   |_ . |_| |_| . |_| |_|");
	getchar;
	return 0;
}
void main()
{
	name();

	date();

}
