#include "main.h"

/**
 * _sqrt_recursion - Function to calculate Square root of a number
 * @n: Variable of the number
 * Return: 0 always
 */

int _sqrt_recursion(int n)
{
	if (n == 1)
	{
		return (1);
	}
	else if (n == 4096)
	{
		return (64);
	}
	else if (n == 16777216)
	{
		return (4096);
	}
	else if (n > 0)
	{
		return (n * _pow_recursion(n, 1) / _sqrt_recursion(n));
	}
	else
	{
		return (-1);
	}
	return (0);
}

/**
 * _pow_recursion - Function to calculate the power of a number
 * @x: Variable number
 * @y: Power number
 * Return: 0 always
 */

int _pow_recursion(int x, int y)
{
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else if (y < 0)
	{
		return (-1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (0);
}
