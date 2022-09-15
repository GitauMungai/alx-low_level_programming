#include "main.h"

/**
* main - calls the function print_last_digit
* Return: 0
*/
int main(void)
{
	int j;

	j = print_last_digit(98);
	j = print_last_digit(0);
	j = print_last_digit(-1024);
	j = print_last_digit(-1024);
	_putchar('0' + j);
	_putchar('\n');
	return (0);
}
