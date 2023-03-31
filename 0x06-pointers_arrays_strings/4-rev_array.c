#include "main.h"

/**
 * reverse_array - Function to reverses the content of intergers
 * @a: Interger to be reversed
 * @n: Element of the interger
 * Return: 0 always
 */

void reverse_array(int *a, int n)
{
	int temp;

	for (int i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
