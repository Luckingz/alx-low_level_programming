#include "main.h"

/*
 * print_alphabet - A programme that prints the alphabet a - z in lower case
 * Return: 0 on success
 */

void print_alphabet(void)
{
	char cah = 'a';

	for (int i = 0; i < 10; i++)
	{
		for (cah = 'a'; cah <= 'z'; cah++)
		{
			_putchar(cah);
		}
		_putchar('\n');
	}
}

