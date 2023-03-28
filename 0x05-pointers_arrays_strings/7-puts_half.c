#include "main.h"


/**
 * puts_half - Function to print half a string
 * @str: Variable
 * Return: 0 always
 */

void puts_half(char *str)
{
	int len = _strlen(str);
	int i = (len - 1) / 2;

	while (i < len)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
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
