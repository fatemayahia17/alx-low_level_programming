#include <stdio.h>
/**
 *main -  prints number of arguments passed into program
 * @argc: int
 * @argv: list
 * Reaurn: 0
 */
int main(int argc, char const *argv[])
{
	int i = 0;

	if (args > 0)
	{
		while (i < argc)
		{
			printf("%s\n", argv[i]);
			++i;
		}
	}
	return (0);
}
