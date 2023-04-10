#include "main.h"
#include <string.h>

/**
 * _strcpy - function that copies the string pointed to by src
 * @dest: first parameter
 * @src: second parameter
 * Return: on success (dest)
 */

char *_strcpy(char *dest, char *src)
{
	dest = strcpy(dest, src);
	return (dest);
}
