#include "main.h"

/**
 * print_rev - Function to print in reverse
 * @s: Variable
 * Return: 0 always
 */

int _strlen(char *s);

void print_rev(char *s)
{
	int len = _strlen(s);
	int i = len - 1;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}

int _strlen(char *s)
{
        int len = 0;

        while (*s != '\0')
        {
                len++;
                s++;
        }
        return (len);                                                                    }
