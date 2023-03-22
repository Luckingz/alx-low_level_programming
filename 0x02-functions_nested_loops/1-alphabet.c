#include "main.h"

/**
 * main - A programme to print alphabet
 * Return: 0 on success
 */
print_alphabet()
{
	char ch = 'a';
	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
}
int main(void)
{
	print_alphabet();
}
