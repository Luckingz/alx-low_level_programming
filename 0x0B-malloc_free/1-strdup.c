#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Function that returns a pointer to new memory space
 * @str: String variable
 * Return: 0 always
 */

char *_strdup(char *str)
{
	char *ch = malloc(sizeof(*str));

	strcpy(ch, *str);

	if (*str != '\0')
	{
		return (ch);
	}
	else if (*str == NULL)
	{
		return (NULL);
}
