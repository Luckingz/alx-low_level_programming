#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Function that creates an array of chars
 * @size: Integer variable
 * @c: Character variable
 * Return: 0 always
 */

char *create_array(unsigned int size, char c)
{
	char *ch = malloc(size * sizeof(char));
	unsigned int index;

	if (size == 0)
	{
		return ('\0');
	}
	else
	{
		if (c != '\0')
		{
			for (index = 0; index < size; index++)
		{
			ch[index] = c;
		}
		return (ch);
		}
		else if (c == '\0')
		{
			for (index = 0; index < size; index++)
			{
				ch[index] = c;
			}
			return ('\0');
		}
		else
		{
			return ('\0');
		}
	}
	return ('\0');
}
