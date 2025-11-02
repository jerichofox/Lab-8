#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_NONSTDC_NO_DEPRECATE

#include <stdio.h>
#include <locale.h>
#include <math.h>

void main()
{
	int n, m, a, r;
	int k = 1;
	int s = 0;

	setlocale(LC_ALL, "Rus");

	puts("Введите значения n и m");
	scanf("%d %d", &n, &m);

	for (int i = m; i >= n; i--) {
		s += i;
		printf("выполнено %d раз\n", k++);
	}
	printf("результат %d\n", s);

	puts("");

	/* Напечатать в столбик все значения 2 в степени a */
	puts("Введите значения a:");
	scanf("%d", &a);

	for (int i = 1; i <= a; i++) {	
		r = (int)pow(2, i);
		printf("   2^%d = %d\n", i, r);
	}

	printf("Результат: %1.1fK\n", r / 1024.);

	system("pause");

	return 0;
}