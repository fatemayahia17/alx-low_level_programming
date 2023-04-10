#include "main.h"
#include <string.h>

/**
 * _strcat - function that concatenates two strings.
 * @dest: first parameter
 * @src: second parameter
 * Return: pointer to the string
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
