#include "main.h"

/**
 * _puts - Function to print a string
 * @str: Variable
 * Return: 0 always
 */

void print_rev(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i--;
	}
	_putchar('\n');
}
