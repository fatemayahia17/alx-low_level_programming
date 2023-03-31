#include <stdio.h>
/**
 * main -  program that finds and prints the first 98 Fibonacci numbers
 * Return: 0 (success)
 */
int main(void)
{
	int count;
	unsigned long fib1 = 0, fib2 = 1, sum, first, second;
	unsigned long fib1_first, fib1_second, fib2_first, fib2_second;

	for (count = 0; count < 92; count++)
	{
		sum = fib1 + fib2;
		printf("%lu, ", sum);

		fib1 = fib2;
		fib2 = sum;
	}

	fib1_first = fib1 / 10000000000;
	fib2_first = fib2 / 10000000000;
	fib1_second = fib1 % 10000000000;
	fib2_second = fib2 % 10000000000;

	for (count = 93; count < 99; count++)
	{
		first = fib1_first + fib2_first;
		second = fib1_second + fib2_second;

		if (fib1_second + fib2_second > 9999999999)
		{
			first += 1;
			second %= 10000000000;
		}

		printf("%lu%lu", first, second);
		if (count != 98)
			printf(", ");

		fib1_first = fib2_first;
		fib1_second = fib2_second;
		fib2_first = first;
		fib2_second = second;
	}
	printf("\n");
	return (0);
}
