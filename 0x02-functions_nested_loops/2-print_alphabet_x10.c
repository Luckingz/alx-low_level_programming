#include "main.h"

/*
 * print_alphabet - A programme that prints the alphabet a - z in lower case
 * Return: 0 on success
 */

void print_alphabet(void)
{
	char cah = 'a';

	int counter = 0;

	while (counter < 10)
	{
		while (cah <= 'z')
		{
			_putchar(cah);
			cah++;
		}
		cah = 'a';
		_putchar('\n');
		counter++;
	}
}
