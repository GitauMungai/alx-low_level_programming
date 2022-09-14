#include<stdio.h>

/**
* main - prints all possible combinations of two digits
* Return: 0
*/
int main(void)
{
	int i;

	for (i = 01; i < 90; i++)
	{
		if (i == 9 && i <= 10)
		{
			putchar(i);
			break;
		}
		else if (i == 19 && i <= 20)
		{
			putchar(i);
			break;
		}
		else if (i == 29 && i <= 30)
		{
			putchar(i);
			break;
		}
		else
		{
			continue;
		}
	}
	putchar(',');
	putchar(' ');
	return (0);
}
