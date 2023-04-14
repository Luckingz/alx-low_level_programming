#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Function that allocates memory for an array
 * @nmemb: Array variable
 * @size: Size variable
 * Return: 0 on success
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *num1 = malloc(nmemb * size);
	unsigned int i = 0;

	if (num1 == NULL)
	{
		return (NULL);
	}
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	for (; i < nmemb * size; i++)
	{
		*((char *)num1 + i) = 0;
	}
	return (num1);
}
