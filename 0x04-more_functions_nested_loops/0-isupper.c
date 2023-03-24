#include "main.h"

/**
 *_isupper - check if input is uper or lower.
 *@c: input to check
 * Return: 1 if upercase, 0 if not.
 */

int _isupper(int c)
{
	int i;

	if (i >= 'A' && i <= 'Z')
		return (1);
	else
		return (0);
}
