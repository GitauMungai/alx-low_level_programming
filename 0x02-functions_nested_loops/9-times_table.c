#include "main.h"
#include<stdio.h>

/**
* times_table - prints the 9 times table starting from 0
*/
void times_table(void)
{
	int i,j;

	i = 0;
	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			printf("%d, ", i * j);
			j++;
		}
		printf("\n");
		i++;
	}
}
