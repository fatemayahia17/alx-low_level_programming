#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid passwords
 * Return: on success (0), on error (1)
 */

int main(void)
{
	char password[90];
	int index = 0, sum = 0, first_half, second_half;

	srand(time(0));
	while (sum <= 2771)
	{
		password[index] = 33 + rand() % 94;
		sum += password[index++];
	}
	password[index] = '\0';
	if (sum != 2772)
	{
		first_half = (sum - 2772) / 2;
		second_half = (sum - 2772) / 2;

		if ((sum - 2772) % 2 != 0)
			first_half++;
		for (index = 0; password[index]; index++)
		{
			if (password[index] >= (33 + first_half))
			{
				password[index] -= first_half;
				break;
			}
		}
		for (index = 0; password[index]; index++)
		{
			if (password[index] >= (33 + second_half))
			{
				password[index] -= second_half;
				break;
			}
		}
	}
	printf("%s\n", password);
	return (0);
}
