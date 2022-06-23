#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int c;
	int f;

printf ("\ninforme a temperatura em Celsius: ");
scanf ("%d", &c);

f=(9*c+160)/5;

printf("\nOs graus em Fahrenheit sao: %d \n\n", f);

system("pause");
}
