#include "main.h"

/**
 * _puts - Function to print a string
 * @str: Variable
 * Return: 0 always
 */

void _puts(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
