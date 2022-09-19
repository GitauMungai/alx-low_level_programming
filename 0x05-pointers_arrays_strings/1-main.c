#include "main.h"

/**
* main - calls swap_int function
* Return: 0
*/
int main(void)
{
	int a;
	int b;

	a = 98;
	b = 42;
	printf("a=%d\n, b=%d\n", a, b);
	swap_int(&a, &b);
	printf("a=%d\n, b=%d\n", a, b);
	return (0);
}
