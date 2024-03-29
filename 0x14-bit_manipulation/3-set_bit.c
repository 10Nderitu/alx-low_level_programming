#include "main.h"

/**
 * set_bit - set the given bits to 1
 * @n: pointer to the pointer
 * @index: index of the bit to set
 * Return: 1 for success, -1 for failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >63)
		return (-1)
			*n = ((1UL << index) | *n);
	return (1);
}
