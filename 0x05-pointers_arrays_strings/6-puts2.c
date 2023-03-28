#include <stdio.h>
#include "main.h"
/**
 * puts2 - the function name
 * _putchar - a header function that inputs character
 * @str: string parameter
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
