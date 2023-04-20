#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_strings - Function to print a string
 * @separator: Character to seperate the output
 * @n: Counter
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	const char *ch;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		ch = va_arg(ap, const char *);

		if (ch == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", ch);
			if (i != n - 1 && separator != NULL)
			{
				printf("%s", separator);
				printf(" ");
			}
		}
	}
		printf("\n");
		va_end(ap);
}
