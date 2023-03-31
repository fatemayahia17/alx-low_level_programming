#include <stdio.h>
/**
 * main -  program that prints the first 50 Fibonacci numbers
 * Return: 0 (success)
 */
int main(void)
{
	unsigned long fib1 = 0;
	unsigned long fib2 = 1;
	int n;
	unsigned long sum;

	for (n = 0; n < 50; n++)
	{
		sum = (fib1 + fib2);
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (n < 49)
			printf(", ");
	}
	printf("\n");
	return (0);
}
