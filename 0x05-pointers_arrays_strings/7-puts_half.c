#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * puts_half - the function name
 * _putchar - a header function that inputs character
 * @str: string parameter
 */

void puts_half(char *str)
{
	int len = strlen(str);

	int i = len / 2;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		++i;
	}
	_putchar('\n');
}
