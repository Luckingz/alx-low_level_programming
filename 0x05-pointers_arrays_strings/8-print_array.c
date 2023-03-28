#include "main.h"

/**
 * print_array - Function to print an array
 * @a: Pointer
 * @n: Variable
 * Return: 0 always
 */

void print_array(int *a, int n)
{
	int i = 0;

	while(i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
			i++;
		}
		printf("\n");
	}

	return (0);
}

