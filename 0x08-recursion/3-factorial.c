#include "main.h"

/**
 * factorial - Function that calculates factorial of a given number
 * @n: Variable of the given number
 * Return: 0 always
 */

int factorial(int n)
{
	if (n != '\0')
	{
		return n * factorial(n - 1);
	}
	else if (n < 0)
	{
		return -1;
	}
	else if (n == 0)
	{
		return 1;
	}
	return (0);
}
