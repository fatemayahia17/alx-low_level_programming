#include "main.h"

/**
 * print_last_digit - function to print print last digit
 * @c: checks input of function
 * Return: Always 0 (Success)
 */

int print_last_digit(int c)
{
	int lastDigit;

	if (c < 0)
		c *= -1;
	lastDigit = c % 10;
	_putchar(lastDigit + '0');
	return (lastDigit);
}
