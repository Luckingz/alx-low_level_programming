#include "main.h"

/**
 * _strchr - Function that locates a character in a string
 * @s: Variable to be checked
 * @c: Character to be cheked
 * Return: S or NULL
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return ('\0');
	}
	return ('\0');
}
