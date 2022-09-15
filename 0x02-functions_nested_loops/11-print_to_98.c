#include "main.h"
#include<stdio.h>

/**
* print_to_98 - prints natural numbers from n to 98
* @n: number to be printed
*/
void print_to_98(int n)
{
	while (n <= 98)
	{
		printf("%d, ", n);
		n++;
	}
	printf("\n");
}
