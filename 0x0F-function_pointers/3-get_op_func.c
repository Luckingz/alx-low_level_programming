#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func - Function that selects the correct function
 * @s: operator variable
 * Return: 0 on success
 */

int (*get_op_func(char *s))(int, int)
{
	if (s != NULL && s == "+")
	{
		return (op_add);
	}
	else if (s == "-")
	{
		return (op_sub);
	}
	else if (s == "*")
	{
		return (op_mul);
	}
	else if (s == "/")
	{
		return (op_div);
	}
	else if (s == "%")
	{
		return (op_mod);
	}
	else if (s == NULL)
	{
		return (NULL);
	}
	return (0);
}
