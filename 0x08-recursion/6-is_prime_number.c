#include "main.h"
/**
 * is_prime_number - check whether numbre is prime
 * @n: number to check
 * @i: modulus
 * Return: 1 if prime otherwise 0
 */
int prime(int n, int i);

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime(n, n - 1));
}

/**
 * prime - check for prime number
 * @n: number
 * @i: modulus
 * Return: prime number
 */

int prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
		return (0);
	return (prime(n, i - 1));
}
