#include "main.h"
#include <stddef.h>

/**
 * _puts_recursion - Function to print a string
 * @s: Variable of the string to be printed
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
		_putchar('\n');
		return;
	}
	else
	{
		_putchar('\n');
		return;
	}

}
