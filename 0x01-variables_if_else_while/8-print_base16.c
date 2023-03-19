#include <stdio.h>

/**
 * main - A programme that prints hexadecimals using
 * thr putchar command.
 * Return: 0 on success
 */

int main(void)
{
	int ch;

	char le;

	for (ch = 0; ch < 10; ch++)
	{
		putchar(ch + '0');
	}
	for (le = 'a'; le <= 'f'; le++)
	{
		putchar(le);
	}
	putchar('\n');
	return (0);
}
