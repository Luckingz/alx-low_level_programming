#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Function that allocates memory using malloc
 * @b: Interger variable
 * Return: 0 on success
 */

void *malloc_checked(unsigned int b)
{
	unsigned int len = sizeof(b);
	unsigned int *mem = malloc(len * sizeof(int));

	if (mem == NULL)
	{
		exit(98);
	}
	else if (mem != NULL)
	{
		return (mem);
	}
	else
	{
		exit(98);
	}
	free(mem);
	return (0);
}

/**
 * _strlen - A Fucntion that retuns the length
 * of a string
 * @s: Variable to be returned
 * Return: always 0
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
