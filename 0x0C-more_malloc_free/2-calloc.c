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
	unsigned int *num1 = malloc(nmemb * size);
	unsigned int i = 0;

	if (num1 == NULL)
	{
		return (NULL);
	}
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	for (; i < size; i++)
	{
		nmemb = num1[i];
	}
	return (num1);
}
