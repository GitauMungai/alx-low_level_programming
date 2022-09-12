#include<stdio.h>

/**
* main - prints out the alphabet
* 
* Description: prints out lowercase alphabet with exceptions of e and q
* 
* Return: 0
*/
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'e' && i != 'q')
		{
			putchar(i);
		}
	}
	putchar('\n');
	return 0;
}
