#include "main.h"

/**
 * reverse_array - Function to reverses the content of intergers
 * @a: Interger to be reversed
 * @n: Element of the interger
 * Return: 0 always
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;
	int temp;

	while (i < j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
}
