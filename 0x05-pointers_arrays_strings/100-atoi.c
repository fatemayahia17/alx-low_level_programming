#include "main.h"

/**
 * _atoi -  function that convert a string to an integer.
 * @s: string to be converted
 * Return: on success (s)
 */

int _atoi(char *s)
{
	int symbol = 1;
	unsigned int num = 0;

	do {
		if (*s == '-')
			symbol *= -1;
		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');
		else if (num > 0)
			break;
	} while (*s++);

	return (num * symbol);
}
