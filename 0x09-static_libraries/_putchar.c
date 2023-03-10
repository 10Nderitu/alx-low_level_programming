#include <unistd.h>

/**
 * _putchar - print c to stdout
 * @c: character
 * written by Ngatia
 * Return: Always 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
