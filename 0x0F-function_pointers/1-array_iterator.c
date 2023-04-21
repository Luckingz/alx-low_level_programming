#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
 * array_iterator - A function that executes a function
 * @array: List
 * @size: Size of the array
 * @action: Pointers to the function
 * Return: 0 on success
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (size != 0)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
