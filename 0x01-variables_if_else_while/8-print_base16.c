#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; ++i)
	{
		putchar(i);
	}
	char c;

	for (c = 'a', c <= 'f'; ++c)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
