#include <stdio.h>

/**
 * main - A programme to print a-z without letter e and q
 * Return: 0 on success
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
		putchar(ch);
		}
		ch++;
	}
	return (0);
}
