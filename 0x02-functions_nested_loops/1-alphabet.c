#include "main.h"

/**
 * main - A programme to print alphabet
 * Return: 0 on success
 */

void print_alphabet(void)
{
        char cha = 'a';

        while (cha <= 'z')
        {
                _putchar(cha);
                cha++;
        }
        _putchar('\n');
	return;
}
