#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_NONSTDC_NO_DEPRECATE

#include <stdio.h>
#include <locale.h>
#include <math.h>

#define PI 3.14

void main()
{
	double y, a;

	setlocale(LC_ALL, "Rus");

	printf("y = x * x + 2 * PI * cos (PI * x / 180)   [0.1; 2.5]\n");
	puts("Введите значение шага табуляции:");
	scanf("%lf", &a);

	printf("     ______________________\n\n");
	printf("    |   x   |     f(x)     |\n");
	printf("     ______________________\n\n");

	for (double x = 0.1; x <= 2.5; x += a) {
		y = x * x + 2 * PI * cos(PI * x / 180);
		printf("    |  %3.1lf  |   %8.5lf   |\n", x, y);
		printf("     ______________________\n\n");
	}


	system("pause");

	return 0;
}