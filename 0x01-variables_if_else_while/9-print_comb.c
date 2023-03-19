#include <stdio.h>

/**
 * main - A programme to print a 0 - 9, with commas and spaces in betweeen
 * Return: 0 on success
 */

int main(void)
{
	int ch;

	for (ch = 0; ch < 10; ch++)
	{
		putchar(ch + '0');
		if (ch != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
