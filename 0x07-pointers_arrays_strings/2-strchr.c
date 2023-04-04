#include "main.h"
/**
 * _strchr - Entry point
 * @s: input
 * @c: input
 * Return: Always 0 (Success)
 */

char *_strchr(char *s, char c)
{
	int n;

	for (n = 0; s[n] >= '\0'; ++n)
	{
		if (s[n] == c)
		{
			return (&s[n]);
		}
	}
	return (0);
}
