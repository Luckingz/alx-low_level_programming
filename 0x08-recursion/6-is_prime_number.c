#include "main.h"

/**
 * is_prime_number - A function that depicts if an input is integer
 * @n: Inpute variable
 * Return: 0 always
 */

int is_prime_number(int n)
{
	if (n == 1)
	{
		return (0);
	}
	else if (n == -1)
	{
		return (0);
	}
	else if (n % 2 != 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (0);
	}
	else
	{
		return (0);
	}
	return (0);
}
