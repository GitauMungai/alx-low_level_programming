#include<stdio.h>

/**
* main - prints numbers of base 10
* description: prints numbers of base 10 with datatype char
* Return: 0
*/
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar((i % 10) + '0');
	}
	putchar('\n');
	return (0);
}
