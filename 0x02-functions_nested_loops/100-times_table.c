#include "main.h"
#include <stdio.h>
/**
 * print_times_table - print_times_table
 *@n: first prameter
 */
void print_times_table(int n) {
	if (n < 0 || n > 15) {
		return;
	}
	for (int i = 0; i <= 10; i++) {
		printf("%d x %d = %d\n", n, i, n*i);
	}
}
