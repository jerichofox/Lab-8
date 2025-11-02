#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_NONSTDC_NO_DEPRECATE

#include <stdio.h>
#include <locale.h>

void main()
{
	int i;
	char c;

	setlocale(LC_ALL, "Rus");

	puts("Введите число и вид печатаемых символов:");
	scanf("%d %c", &i, &c);

	for (int start = 1; start <= i; start++) {
		putchar(c);
	}

	puts("");

	//*Печатает в конце символ '+'
	for (int start = 1; start <= i; start++) {
		if (start == i)  {
			putchar(c);
			putchar('+');
		} else {
			putchar(c);
		}			
	}

	puts("");

	//**Печатает полстроки одним символом, а вторую половину другим
	for (int start = 1; start <= i; start++) {
		if (start <= i / 2) {
			putchar(c);			
		} else {
			putchar('+');
		}
	}

	puts("");

	//***Печатает после каждого символа восклицательный знак
	for (int start = 1; start <= i; start++) {		
			putchar(c);
			putchar('!');
	}

	system("pause");

	return 0;
}