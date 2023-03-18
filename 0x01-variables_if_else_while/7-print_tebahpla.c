#include <stdio.h>

/**
 * main - Programme to print lowercase alphabet in reverse order
 * Return: 0 for success
 */

int main(void)
{
	char ch;

	ch = 'z';
	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
