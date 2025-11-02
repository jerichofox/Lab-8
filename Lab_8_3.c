#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_NONSTDC_NO_DEPRECATE

#include <stdio.h>
#include <locale.h>
#include <math.h>

void main()
{
	double r = 1;
	
	setlocale(LC_ALL, "Rus");	     
    
	for (double i = 0.1; i <= 10; i += 0.1) {
		r *= (1 + sin(i));		
	}
	printf("Результат: %le\n", r);
	
	system("pause");

	return 0;
}