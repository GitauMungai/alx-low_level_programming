#include "main.h"

/**
* print_last_digit - prints last digit of a number
* @n: number whose last digit we're printing
* Return: last_digit
*/
int print_last_digit(int n)
{
	if ((n < 0) || (n > 0))
	{
		_putchar(n);
	}
		return (n % 10);
}
