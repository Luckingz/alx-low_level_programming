#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Function that creates an array of integers
 * @min: Minimum variable
 * @max: Maximum variable
 * Return: 0 on succes
 */

int *array_range(int min, int max)
{
	int *ch = malloc(sizeof(int) * (max - min + 1));
	int i;

	if (ch == NULL)
	{
		return (NULL);
	}
	if (min > max)
	{
		return (NULL);
	}

	i = 0;

	while (min <= max)
	{
		ch[i] = min;
		i++;
		min++;
	}
	return (ch);
}
