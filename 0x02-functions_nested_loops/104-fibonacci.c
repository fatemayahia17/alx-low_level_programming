#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int fib1 = 1, fib2 = 2, next_fib, count = 2;

	printf("%d, %d", fib1, fib2);
	while (count < 98)
	{
		next_fib = fib1 + fib2;
		printf(", %d", next_fib);
		fib1 = fib2;
		fib2 = next_fib;
		count++;
	}
	printf("\n");
	return (0);
}
