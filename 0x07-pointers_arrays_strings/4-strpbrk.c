#include "main.h"

/**
 * _strpbrk - A function that searches a string for any set of bytes
 * @s: Variable of the String to be searched
 * @accept: Set of bytes variable
 * Return: s
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *result = accept;

		while (*result != '\0' && *result != *s)
		{
			result++;
		}
		if (*result != '\0')
		{
			return (s);
		}
		s++;
	}
	return ('\0');
}
