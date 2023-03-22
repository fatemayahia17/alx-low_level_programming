#include "main.h"

/**
 * print_last_digit - function to print print last digit
 * @c: checks input of function
 * Return: Always 0 (Success)
 */

int print_last_digit(int c)
{
	if (c < 0)
		c *= -1;
	c = c % 10 + 48;
	return (c);
}
