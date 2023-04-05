#include <unistd.h>
#include "main.h"
/**
 * _putchar -  write a character c in stdout
 * @c: the character to print
 * Return: Always 1 Success, on error -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
