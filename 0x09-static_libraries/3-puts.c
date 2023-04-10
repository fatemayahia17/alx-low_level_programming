#include <stdio.h>
#include "main.h"

/**
 * _puts - The name of the function
 *@str: The string parameter
 * _putchar - our header file function
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
	_putchar(*str);
	str++;
	}
	_putchar('\n');
}
