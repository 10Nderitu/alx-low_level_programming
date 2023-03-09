#include "main.h"
/**
 * _sqrt_recursion - returns square root of a number
 * @n: number to be square rooted
 * @i: root
 * Return: square root
 */
int sqrt_helper(int n, int i);

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (sqrt_helper(n, 1));
}
/**
 * sqrt_helper - calculate square root
 * @n: initial number
 * @i: root
 * Return: root of number
 */
int sqrt_helper(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}
	return (sqrt_helper(n, i + 1));
}
