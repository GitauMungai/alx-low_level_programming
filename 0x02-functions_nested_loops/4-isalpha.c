#include "main.h"

/**
* _isalpha - checks whether a letter is lowercase or upppercase
* @c: argument to be checked
* Return: c
*/
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (c);
}
