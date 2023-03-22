#include "main.h"

/**
 * print_to_98 - function that prints numbers to 98
 * @n: checks input of function
 * Return: Always 0 (Successed)
 */

void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 97; ++i)
			printf("%d, ", i);
	}
	else
	{
		for (i = n; i >= 99; --i)
			printf("%d, ", i);
	}
	printf("%d\n", 98);
}
