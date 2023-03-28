#include "main.h"

/**
 * puts2 - Function to print every other character of a string
 * @str: variable
 * Return: 0 always
 */

void puts2(char *str)
{
	int len = _strlen(str);

	int i = 0;

	while (i < len)
	{
		_putchar(str[i]);
		i += 2;
	}
}

/**
 * _strlen - Function to print lenght of a String
 * @s: s is a variable
 * Return: lenght
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
