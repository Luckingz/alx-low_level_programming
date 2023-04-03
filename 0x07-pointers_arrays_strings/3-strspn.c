#include "main.h"

/**
 * _strspn - Function that gets the length of a prefix substring
 * @s: Variable
 * @accept: 2nd variable
 * Return: s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	while (*s != '\0')
	{
		char result = accept;

		while (*result != '\0' && *result != *s)
		{
			result++;
		}
		if (*result == '\0')
		{
			return (i);
		}
		i++;
		s++;
	}
	return (i);
}
