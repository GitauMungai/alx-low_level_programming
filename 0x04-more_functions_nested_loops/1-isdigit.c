#include "main.h"

/**
* _isdigit - checks for digits between 0 and 9
* @c: is the digit being checked
* Return: 1 for success and 0 for failure
*/
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (c);
}
