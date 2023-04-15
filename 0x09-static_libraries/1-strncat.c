#include "main.h"

/**
 * _strncat - A function to concatenants two strings
 * @dest: variable 1
 * @src: variable 2
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
