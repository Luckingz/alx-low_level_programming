#include "main.h"

/**
 * print_rev - Function to print in reverse
 * @s: Variable
 * Return: 0 always
 */

void print_rev(char *s)
{
	int len = _strlen(*s);
	int i = len - 1;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
