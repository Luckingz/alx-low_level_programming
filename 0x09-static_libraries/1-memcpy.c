#include "main.h"

/**
 * _memcpy - Function that copies memory area
 * @dest: Destination variable
 * @src: Source variable
 * @n: Counter variable
 * Return: Dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
