#include "main.h"

/**
 * _puts - Function to print a string
 * @s: Variable
 * Return: 0 always
 */

void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
