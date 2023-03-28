#include "main.h"
#include <string.h>

/**
 * puts2 - function that prints every other character of a string,
 *		starting with the first character.
 * @str: string to print
 */

void puts2(char *str)
{
	int len = 0;
	int i = 0;

	while (str[i++])
		len++;

	for (i = 0; i < len; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
