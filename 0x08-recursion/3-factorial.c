#include "main.h"

/**
 * factorial - function that returns the factorial of a given number.
 * @n: firsh input
 * Return: If n is lower than 0, the function should return -1
 */

int factorial(int n)
{
	if (n == 1 || n == 0)
	{
		return (n);
	}
	else if (n <= 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
