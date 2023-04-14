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
	unsigned int len1 = 0, len2 = 0, i, j;
	char *ch = malloc(len1 + n + 1);

	if (ch == NULL)
	{
		return (NULL);
	}

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	if (n >= len2)
	{
		n = len2;
	}

	for (i = 0; i < len1; i++)
	{
		ch[i] = s1[i];
	}

	for (j = 0; j < n; j++)
	{
		ch[i + j] = s2[j];
	}

	ch[i + j] = '\0';

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
 * _strlen - A Fucntion that retuns the length
 * of a string
 * @s: Variable to be returned
 * Return: always 0
 */

int _strlen(char *s)
{
	unsigned int len;

	for (len = 0; s[len] != '\0'; len++)
		;
	return (len);
}
