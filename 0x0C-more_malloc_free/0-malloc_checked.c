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
	void *mem = malloc(b);

	if (mem == NULL)
	{
		exit(98);
	}
	else
	{
		return (mem);
	}
	free(mem);
	return (mem);
}
