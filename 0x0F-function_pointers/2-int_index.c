#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - A function that searchers for an integer
 * @array: List
 * @size: Size of the array
 * @cmp: Pointer to the function used to compare values
 * Return: 0 on success
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0 && array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
