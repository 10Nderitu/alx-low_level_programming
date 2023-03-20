#include <unistd.h>

/**
 *  _putchar -writes the character c to stdout
 *  @c: The character to print
<<<<<<< HEAD
=======
 *
>>>>>>> a55bf68d38931ab006c9f74b04e553392e7c1d42
 *  Return: On success 1
 *  On error -1 is returned errno is set 
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
