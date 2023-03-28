#include "main.h"

/**
 * rev_string - A function to reverse a string
 * @s: A variable
 * Return: 0 always
 */

void rev_string(char *s)
{
	int len = _strlen(s);

	int i;

	while (i < len / 2)
	{
		char temp = s[i];

		s[i] = s[len - 1 - i];

		s[len - 1 - i] = temp;
		i++;
	}
	_putchar('\n');
}

/**
 * _strlen - Function to print lenght of a string
 * @s: is a variable
 * Return: length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
