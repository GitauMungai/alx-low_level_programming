#include "main.h"

/**
* _isupper - checks for uppercase character
* @c: character to be checked
* Return: 1 for success and 0 for failure
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (c);
}
