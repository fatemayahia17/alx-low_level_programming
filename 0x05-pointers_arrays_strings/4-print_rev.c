#include "main.h"
#include <string.h>
/**
 *print_rev - this function prints a reversed string
 *strlen -this function finds the lengh of a string from the string.h library
 * @s: string notifier parameter
 * len - initializes the strlen function
 */

void print_rev(char *s)
{
	int len = strlen(s);

	int i = len - 1;

	while (i >= 0)
	{
		_putchar(s[i]);
		--i;
	}
	_putchar('\n');
}
