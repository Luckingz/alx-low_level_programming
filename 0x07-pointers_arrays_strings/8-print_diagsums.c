#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Function that prints the sum of two dagonals of a square
 * matrix of integers
 * @a: The array
 * @size: Size of the array
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int result1 = 0;
	int result2 = 0;
	int index;

	for (index = 0; index < size * size; index += size + 1)
	{
		result1 += a[index];
	}

	for (index = size - 1; index < size * size - 1; index += size - 1)
	{
		result2 += a[index];
	}

	printf("The Sum of main diagonal is: %d\n", result1);
	printf("The Sum of other diagonal is: %d\n", result2);

	return ('\0');
}
