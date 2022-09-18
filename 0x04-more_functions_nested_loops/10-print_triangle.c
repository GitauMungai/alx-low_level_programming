#include "main.h"

/**
* print_triangle - prints a traingle
* @size: size of the triangle
*/
void print_triangle(int size)
{
	int base, height;

	if (size  > 0)
	{
		for (height = 0; height <= size; height++)
		{
			for (base = size; base >= 1; base--)
			{
				if (height < base)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
	_putchar('\n');
}
