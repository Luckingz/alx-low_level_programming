#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - Function that prints a name
 * @name: Name to be printed
 * @f: variable
 * Return: 0 on success
 */

void print_name(char *name, void (*f)(char *))
{
	_putchar(name);	
	char q = name;
	f = &q;
	return (0);
}
