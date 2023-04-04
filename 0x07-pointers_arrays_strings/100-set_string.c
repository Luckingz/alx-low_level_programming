#include "main.h"

/**
 * set_string - Function that sets the value of a pointer to a char
 * @s: Source variable
 * @to: Varible to be set
 * Return: NULL
 */

void set_string(char **s, char *to)
{
	*s = &to;

	return ('\0');
}
