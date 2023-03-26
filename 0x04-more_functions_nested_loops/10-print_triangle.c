#include "main.h"
/**
 * print_triangle - a function that prints a triangle, followed by a new line.
 * @size: is the size of the triangle
 * If size is 0 or less, the function should print only a new line
 * Use the character # to print the triangle
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
		_putchar('\n');

	else
	{
		for (i = 1; i <= size; ++i)
		{
			for (k = 1; k <= size - i; ++k)
			{
				_putchar(' ');
			}
			for (j = 1; j <= i; ++j)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
