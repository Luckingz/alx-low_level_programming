#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_all - Function to print everything
 * @format: Format to be printed
 * Return: 0 on success
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	const char *separator = "";
	unsigned int index = 0, je;
	char *ch;

	va_start(ap, format);

	while (format && format[index])
	{
		je = index + 1;
		switch (format[index])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				ch = va_arg(ap, char *);
				if (ch == NULL)
					ch = "(nil)";
				printf("%s", ch);
				break;
			default:
				je = 0;
				break;
		}
		if (format[je])
		{
			separator = ", ";
			printf("%s", separator);
		}
		index = je;
	}
	printf("\n");
	va_end(ap);
}
