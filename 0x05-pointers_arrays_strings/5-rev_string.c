#include "main.h"

/**
 * rev_string - A function to reverse a string
 * @s: A variable
 * Return: 0 always
 */

void rev_string(char *s)
{
	int len = _strlen(s);
	int i = len - 1;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	putchar('\n');
}
