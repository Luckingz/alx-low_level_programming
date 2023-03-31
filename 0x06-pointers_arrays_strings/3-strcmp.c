#include "main.h"

/**
 * _strcmp - Function to compare two strings
 * @s1: First string variable
 * @s2: Second strign variable
 * Return: 0 always
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return ((int)(*s1 - *s2));
}
