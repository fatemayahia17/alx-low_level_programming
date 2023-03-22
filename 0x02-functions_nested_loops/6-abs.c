#include "main.h"

/**
 * _abs - print the absolute value of n
 * @n: the value to be checked
 * Return: Always 0 (Success)
 */

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
