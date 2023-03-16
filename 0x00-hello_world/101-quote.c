#include <unistd.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: C program that print in std error
 * Return: 1 (Success)
*/
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
