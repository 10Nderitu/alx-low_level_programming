#include "main.h"
/**
 * _isalpha - checks for alphabet prits 1 for alphabet and 0 for non alphabet
 * @c: The character to print
 * Return: On success 1
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
