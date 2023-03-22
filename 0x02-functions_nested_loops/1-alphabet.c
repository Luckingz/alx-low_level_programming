#include "main.h"

/**
 * main - A programme to print alphabet
 * Return: 0 on success
 */
void print_alphabet()
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
int main(void)
{
	print_alphabet();
	return (0);
}
