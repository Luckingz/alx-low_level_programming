#include "main.h"

/**
 * _print_rev_recursion - Function to print a string
 * @s: Variable of the string to be printed
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
		return;
	}
	else
	{
		_putchar('\n');
		return;
	}
	_putchar('\n');

}
