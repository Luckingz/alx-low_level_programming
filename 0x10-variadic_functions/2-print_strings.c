#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <ctype.h>
#include <string.h>

/**
 * print_strings - Function to print a string
 * @separator: Character to seperate the output
 * @n: Counter
 */

void print_strings(const char *separator, cons unsigned int n, ...)
{
	va_list ap;

	va_start(ap, n);

	for (unsigned int i = 0; i < n; i++)
	{
		if (!isdigit(*va_arg(ap, char*)))
		{
			printf("%s", va_arg(ap, char*));
		}
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
}
