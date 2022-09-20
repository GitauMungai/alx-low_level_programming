#include "main.h"

/**
* print_array - prints the number of characters in an array
* @a: pointer of the array
* @n: number of characters of the array
*/
void print_array(int *a, int n)
{
	int length = sizeof(a);

	for (n = 0; n < length; n++)
	{
		printf("%d, ", a[n]);
	}
	printf("\n");
}
