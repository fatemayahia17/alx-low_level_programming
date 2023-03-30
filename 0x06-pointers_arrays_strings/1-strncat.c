#include "main.h"
#include <string.h>

/**
 * _strncat - function that concatenates two strings.
 * @dest: first patrameter
 * @src: second parameter
 * @n: third parameter
 * Return: pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
