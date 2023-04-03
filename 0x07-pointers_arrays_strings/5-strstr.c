#include "main.h"

/**
 * _strstr - A function that locates a substring
 * @haystack: The variable to be checked
 * @needle: The substring variable
 * Return: haystack or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	while (*s != '\0')
	{
		char *result = accept;
		char *jet = s;

		while (*result != '\0' && *result == *jet)
		{
			result++;
			jet++;
		}
		if (*result == '\0')
		{
			return (s);
		}
		s++;
	}
	return ('\0');
}
