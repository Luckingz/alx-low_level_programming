#include "main.h"

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
