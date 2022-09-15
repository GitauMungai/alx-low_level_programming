#include "main.h"

/**
* _islower - checks whether c is in lowercase
* @c: variable to be checked
* Returns: i for success
* fail: 0 for error
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (c);
}
