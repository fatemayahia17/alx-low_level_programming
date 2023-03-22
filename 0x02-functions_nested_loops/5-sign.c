#include "main.h"

/**
 * print_sign - function to check sign of number
 * @n: checks input of function
 * Return:1 if n is greater than zero, 0 if equal zero, -1 if is less than 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return  (-1);
	}
}
