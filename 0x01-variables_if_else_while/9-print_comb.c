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
		if (i == 57)
			continue;
		putchar(',');
		putchar("\n");
	}
	putchar('\n');
	return (0);
}
