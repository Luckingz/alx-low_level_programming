#include "3-calc.h"
#include <stdio.h>
#include <stddef.h>

/**
 * op_add - Function to add
 * @a: first number
 * @b: second number
 * Return: 0 on success
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Function to sub
 * @a: first number
 * @b: second number
 * Return: 0 on success
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Function to mutiply
 * @a: first number
 * @b: second number
 * Return: 0 on success
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Function to divide
 * @a: first number
 * @b: second number
 * Return: 0 on success
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Function to modulus
 * @a: first number
 * @b: second number
 * Return: 0 on success
 */

int op_mod(int a, int b)
{
	return (a % b);
}
