#include "main.h"

/**
 * main - A programme to print alphabet
 * Return: 0 on success
 */

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
        char ch = 'a';

        while (ch <= 'z')
        {
                _putchar(ch);
                ch++;
        }
        _putchar('\n');
}
