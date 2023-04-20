#include "main.h"
#include <stdarg.h>

/**
 * sum_them_all - Function that returns the sum of all parameters
 * @n: 1st variable
 * Return: 0 on succes
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	unsigned int sum;

	if (n == 0)
	{
		return (0);
	}

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, unsigned int);
	}
	va_end(va_list ap);
	return (sum);
}
