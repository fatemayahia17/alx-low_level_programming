#include <stdio.h>
#include <string.h>
/**
 * rev_string - the function name
 * strlen  - it gets the length of a string from string.h library
 * len - variable
 * @s: String parameter
 */

void rev_string(char *s)
{

	int len = strlen(s);
	int i = 0;

	while (i < len / 2)
	{
		char temp = s[i];

		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
		++i;
	}
}
