#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: C program that print in std error
 * Return:  1 (Success)
*/

int main(void)
{
	char in[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(1, in, 59);
	return (1);
}
