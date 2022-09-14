#include "main.h"

/**
* print_alphabet - prints out lowercase alphabet
* Return: 0
*/
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
	/*calling function _putchar*/
		_putchar(i);
	}
	_putchar('\n');
}
