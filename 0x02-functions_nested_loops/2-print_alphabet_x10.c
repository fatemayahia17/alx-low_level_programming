#include "main.h"

/**
 * print_alphabet_x10 - print alphabet from a to z 10 times
 */
void print_alphabet_x10(void)
{
	int i;
	int j = 1;

	while (j <= 10)
	{
		for (i = 'a'; i <= 'z'; ++i)
		{
			_putchar(i);
		}
		_putchar('\n');
		++j;
	}
}
