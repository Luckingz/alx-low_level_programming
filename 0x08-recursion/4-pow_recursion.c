#include "main.h"

/**
 * _pow_recursion - A function to raise x to the power of y
 * @x: Variable 1
 * @y: Variable 2
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
	return (0);
}
