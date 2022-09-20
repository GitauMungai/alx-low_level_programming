#include "main.h"

/**
* puts2 - prints out every charater in a string
* @str: the string whose characters are to be printed
*/
void puts2(char *str)
{
	int i = 0;/*i is the index position of a character*/

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			printf("%c", str[i]);
		}
		i++;
	}
}
