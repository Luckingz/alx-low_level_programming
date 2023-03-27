#include "main.h"

/**
 * swap_int - Function to swap two integers
 * @a: 1st variable
 * @b: 2nd variable
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
