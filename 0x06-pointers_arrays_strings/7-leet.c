#include "main.h"
/**
 * leet - function that encodes a string into 1337.
 * @str: first parameter
 * Return: encoded string
 */

char *leet(char *str)
{
	int i, j;
	char leet1[] = "aAeEoOtTlL";
	char leet2[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == leet1[j])
				str[i] = leet2[j];
		}
	}

	return (str);
}
