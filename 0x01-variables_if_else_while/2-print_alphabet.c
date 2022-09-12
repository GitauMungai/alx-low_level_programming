#include<stdio.h>

/**
* main - Entry point
*
* @my-char: variable
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char my_char = 'a';

	while (my_char <= 'z')
	{
		putchar(my_char);
		my_char++;
	}
	putchar('\n');
	return (0);
}
