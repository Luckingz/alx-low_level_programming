#include "main.h"

/**
 * _sqrt_recursion - Function to calculate Square root of a number
 * @n: Variable of the number
 * Return: 0 always
 */

int _sqrt_recursion(int n)
{
	if (n > 0)
	{
		return (n * _pow_recursion(n, 1) / _sqrt_recursion(n));
	}
	else if (n == 1)
	{
	return (1);
	}
	else
	{
	return (-1);
	}
	return (0);
}
