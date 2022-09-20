#include "main.h"

/**
* print_rev - prints the reverse of a string
* @s: string be reversed
*/
void print_rev(char *s)
{
	int i, len;
	char c;

	len = strlen(s);
	for (i = 0; i < len / 2; i++)
	{
		c = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = c;
	}
	printf("%d\n", s[i]);
}

