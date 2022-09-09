#include<stdio.h>
/**
 * main - Entry level
 *
 * @int: first member
 * @float: second member
 * @char: third member
 * @double: forth member
 */
int main(void)
{
	int intType;
	float floatType;
	char charType;
	double doubleType;
	printf("Size of int: %lubytes\n,sizeof(intType)");
	printf("Size of  float: %lubytes\n , sizeof(floatType)");
	printf("Size of char: %lubytes\n , sizeof(charType)");
	printf("Size of double: %lubytes\n, sizeof(doubleType)");
	return(0);
}
