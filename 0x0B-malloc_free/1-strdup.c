#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Function that returns a pointer to new memory space
 * @str: String variable
 * Return: 0 always
 */

char *_strdup(char *str)
{
	char *ch = malloc(sizeof(*str));

	if (*str != '\0')
	{
		ch = *str;
		return (ch);
	}
	else if (*str == '\0')
	{
		return ('\0');
	}
	return (0);
}
