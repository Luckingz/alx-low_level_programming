#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Function that concatenates two strings
 * @s1: First variable
 * @s2: Second variable
 * @n: Counter
 * Return: 0 on succes
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2;
	char *ch;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	char *result;

	ch = malloc((len1 + n + 1) * sizeof(char));

	if (ch == NULL)
	{
		return (NULL);
	}

	if (n >= len2)
	{
		result = _strncat(ch, s2, len2);
	}
	else
	{
		result = _strncat(ch, s1, len1);
		result = _strncat(ch + len1, s2, n);
	}
	return (ch);
}

/**
 * _strncat - Function to concatenate two strings
 * @dest: Destination variable
 * @src: Source variable
 * @n: variable 3
 * Return: 0 always
 */

char *_strncat(char *dest, char *src, int n)
{
	char *result = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
	return (result);
}

/**
 * _strcpy - Function that copies a string to another
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
