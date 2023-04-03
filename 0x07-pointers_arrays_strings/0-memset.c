#include "main.h"

/**
 * _memset - A function to fill memory with a constnant byte
 * @s: Char variable
 * @b: Second Char
 * @n: Int variable
 * Return: 0 always
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}

