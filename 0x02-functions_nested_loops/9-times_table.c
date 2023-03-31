#include "main.h"
#include <stdio.h>
/**
 * main - Function caller
 *
 * Return: Always 0 (Success)
 */
void times_table(void) {
	int i;
	
	for (i = 0; i <=10; i++) {
		printf("9 x %d = %d\n", i, 9*i);
	}
}

int main()
{
	times_table();
	return (0);
}
