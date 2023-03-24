#include "main.h"

/**
 *_isupper - check if input is uper or lower.
 *@c: input to check
 * Return: 1 if upercase, 0 if not.
 */

int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
