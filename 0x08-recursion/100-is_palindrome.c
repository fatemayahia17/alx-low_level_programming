#include "main.h"
#include <string.h>
/**
 * is_palindrome - function that returns 1 or 0
 *		if a string is a palindrome and 0 if not.
 * @s: first input
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
