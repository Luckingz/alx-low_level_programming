#include "main.h"

/**
 * _strstr - A function that locates a substring
 * @haystack: The variable to be checked
 * @needle: The substring variable
 * Return: haystack or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *result = needle;
		char *jet = haystack;

		while (*result != '\0' && *result == *jet)
		{
			result++;
			jet++;
		}
		if (*result == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return ('\0');
}
