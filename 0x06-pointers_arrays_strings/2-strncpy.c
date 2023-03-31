#include "main.h"

/**
 * _strncpy - Function to copy a string
 * @dest: Destination variable
 * @src: Source variable
 * @n: Counter variable
 * Return: 0 always
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *result = dest;

	while (n >= 0 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	if (n > 0)
	{
		*dest = '\0';
	}
	return (result);
}
