#include <stdio.h>

/**
 * main - A programme that prints all single digit numbers of base 10
 * Return: 0 on success
 */

int main(void)
{
	int ch;

	ch = 0;

	while (ch < 10)
	{
		putchar(ch + '0');
		ch++;
	}
	putchar('\n');
	return (0);
}
