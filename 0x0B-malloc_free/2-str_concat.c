#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Function that concatenates two strings
 * @s1: First string variable
 * @s2: Second string varable
 * Return: 0 on success
 */

char *str_concat(char *s1, char *s2)
{
	int len1, len2;
	char *ch;

	if (s2 == NULL)
	{
		return (NULL);
	}

	len1 = _strlen(s2);
	len2 = _strlen(s1);
	ch = malloc((len1 + len2 + 1) * sizeof(char));

	if (ch == NULL)
	{
		return (NULL);
	}
	else if (*s2 != '\0' || s1 != NULL || s2 != NULL)
	{
		_strcpy(ch, s1);
		_strcat(ch, s2);
		return (ch);
	}
	else
	{
		return (NULL);
	}
	free(ch);
	return (ch);
}


/**
 * _strcat - Function to concatenate two strings
 * @dest: variable 1
 * @src: variable 2
 * Return: 0 always
 */

char *_strcat(char *dest, char *src)
{
	char *result = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (result);
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
