#include "main.h"

/**
* main - calls the function print_last_digit
* Return: 0
*/
int main(void)
{
	int j;

	print_last_digit(98);
	print_last_digit(0);
	j = print_last_digit(-1024);
	_putchar('0' + j);
	_putchar('\n');
	return (0);
}
