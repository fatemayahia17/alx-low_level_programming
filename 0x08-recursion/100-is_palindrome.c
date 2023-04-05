#include "main.h"
#include <string.h>
/**
 * is_palindrome - function that returns 1 or 0
 *		if a string is a palindrome and 0 if not.
 * @s: first input
 * Return: Always (0) success.
 */

int is_palindrome(char *s)
{
	int i, n = strlen(s);

	for (i = 0; i <= s[i]; ++i)
	{
		if (s[i] != s[n - 1 - i])
		{
			return (0);
		}
	}
	return (1);
}
