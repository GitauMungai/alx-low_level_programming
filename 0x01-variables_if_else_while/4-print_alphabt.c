#include<stdio.h>

/**
* main - prints out the alphabet
* Description: prints out lowercase with exceptions
* Return: 0
*/
int main(void)
{
	char i;
	
	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'e' && i != 'q')
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
