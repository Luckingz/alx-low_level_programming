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
	int len = _strlen(str);

	char *ch = malloc((len + 1) * sizeof(char));

	if (*str != '\0')
	{
		_strcpy(ch, str);
		return (ch);
	}
	else if (ch == NULL)
	{
		return (NULL);
	}
	free(ch);
	return (0);
}


/**
 * _strlen - A Fucntion that retuns the length
 * of a string
 * @s: Variable to be returned
 * Return: always 0
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

/**
 * _strcpy - Function to copy a string
 * @dest: Destination variable
 * @src: Source variable
 * Return: 0 always
 */

char *_strcpy(char *dest, char *src)
{
	char *result = dest;

	while (*src != '\0')
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (result);
}
