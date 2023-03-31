#include "main.h"

/**
 * string_toupper - Function to change lower case to uppercase
 * @str: Variable
 * Return: 0 always
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

