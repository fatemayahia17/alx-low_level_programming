#include "main.h"

/**
 *print_diagonal - a function that draws a diagonal line on the termina
 *@n: is the number of times the character \ should be printed
 *The diagonal should end with a \n
 *If n is 0 or less, the function should only print a \n
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar ('\n');
	}
	else
	{
		int i, j;

		for (i = 0; i < n; ++i)
		{
			for (j = 0; j < i; ++j)
			{
				putchar(' ');
			}
			putchar('\\');
			putchar('\n');
		}
	}
}
