#include "main.h"

/**
* main - calls the functio print_sign
* Return: 0
*/
int main(void)
{
	int j;

	j = print_sign(98);
	_putchar(',');
	_putchar(' ');
	_putchar(j + '0');
	_putchar('\n');
	j = print_sign(0);
	_putchar(',');
	_putchar(' ');
	_putchar(j + '0');
	_putchar('\n');
	j = print_sign(0xff);
	_putchar(',');
	_putchar(' ');
	_putchar(j + '0');
	_putchar('\n');
	j = print_sign(-1);
	_putchar(',');
	_putchar(' ');
	_putchar(j + '0');
	_putchar('\n');
	return (0);
}
