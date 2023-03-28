#include <stdio.h>
/**
 * print_array - function name
 * printf - a function that prints inputs from stdio.h library
 * @a: a pointer
 * @n: an integer variable
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
