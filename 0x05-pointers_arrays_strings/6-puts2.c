#include <stdio.h>
#include "main.h"
/**
 * puts2 - the function name
 * _putchar - a header function that inputs character
 * @str: string parameter
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
