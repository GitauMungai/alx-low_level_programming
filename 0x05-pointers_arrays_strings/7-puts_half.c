#include "main.h"

/**
* puts_half - prints half of a string
* @str: string to be printed
*/
void puts_half(char *str)
{
	int n, length_of_string;

	length_of_string = strlen(str);
	n = (length_of_string - 1) / 2;
	for (n = 0 ; n < length_of_string ; n++)
	{
		if (n / 2 != 0)
		{
			_putchar('n');
		}
		_putchar('\n');
	}
}
