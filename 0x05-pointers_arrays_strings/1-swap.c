#include "main.h"

/**
* swap_int - swaps the values of two integers
* @a: first integer to be swapped
* @b: second integer to be swaped
*/
void swap_int(int *a, int *b)
{
	int temporary_var;

	temporary_var = *a;
	*a = *b;
	*b = temporary_var;
}
