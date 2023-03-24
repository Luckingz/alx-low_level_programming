#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= a && a >= c)
	{
		largest = b;
	}
	else if (c >= a && c >= b)
	{
		largest = c;
	}
	else if (c == 0 && b == 0 && a == 0)
	{
		largest = 0;
	}
	else
	{
		printf("Error");
	}

	return (largest);
}
