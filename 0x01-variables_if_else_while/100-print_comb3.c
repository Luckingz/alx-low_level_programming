#include <stdio.h>

/**
 * main - Programme to print numbers
 * Return: 0 on success
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 9; i++)
	{
		/* First digit */
	for (j = i + 1; j <= 9; j++)
	{
		/* Second digit */
	putchar(i + '0');
	putchar(j + '0');
	if (i != 8 || j != 9)
	{
		/* add ", " unless it's the last combination */
	putchar(',');
	putchar(' ');
	}
	}
	}
	return (0);
}
