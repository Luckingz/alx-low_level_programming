#include "main.h"

/**
 * print_rev - Function to print in reverse
 * @str: Variable
 * Return: 0 always
 */

void print_rev(char *str)
{
	int len = _strlen(str);
	int i = len - 1;

	while (i >= 0)
	{
		_putchar(str[i]);
		i--;
	}
	_putchar('\n');
}
