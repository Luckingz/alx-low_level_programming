#include "main.h"

/**
 * string_toupper - Function to change lower case to uppercase
 * @*'': Variable
 * Return: 0 always
 */

char *string_toupper(char *)
{
	int i = 0;

	while (*[i] != '\0')
	{
		if (*[i] >= 'a' && *[i] <= 'z')
		{
			*[i] = *[i] - ('a' - 'A');
		}
		i++;
	}
	return (*);
}

