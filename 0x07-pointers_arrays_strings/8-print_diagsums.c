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

	for (int index = 0; index < size; index++)
	{
		result1 += a[index * size + index];
		result2 += a[(index + 1) * size - (index + 1)];
	}

	printf("The Sum of main diagonal is: %d\n", result1);
	printf("The Sum of other diagonal is: %d\n", result2);

	return ('\0');
}
