#include "main.h"

/**
* print_array - prints the number of characters in an array
* @a: pointer of the array
* @n: number of characters of the array
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}
	printf("\n");
}
