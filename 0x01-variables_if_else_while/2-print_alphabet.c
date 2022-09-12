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
	for (my_char = 'a'; my_char <= 'z'; my_char++)
	{
		putchar(my_char);
	}
	return (0);
}
