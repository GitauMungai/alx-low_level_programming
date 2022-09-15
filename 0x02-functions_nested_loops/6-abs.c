#include "main.h"
#include<stdlib.h>

/**
* _abs - computes the absolute value of an integer
* @n: integer whose absolute we want to get
*/
int _abs(int n)
{
	n = abs(n);
	_putchar(n);
	return (n);
}
