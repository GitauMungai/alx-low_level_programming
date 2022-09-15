#include "main.h"

/**
* main - calls the function print_last_digit
* Return: 0
*/
int main(void)
{
	int j;
	j = print_last_digit(98);
	_putchar(j + '0');
	j = print_last_digit(0);
	_putchar(j + '0');
	j = print_last_digit(-1024);
	_putchar(j + '0');
	_putchar('\n');
	return (0);
}
