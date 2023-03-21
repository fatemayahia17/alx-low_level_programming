#include "main.h"

/**
 * _isalpha - function to check if character is in lowercase or upercase
 * @c: checks input of function
 * Return: return 1 if c is lowercase or upercase , Always 0 (Success)
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	return (0);
}
