#include <stdio.h>

/**
 * main - A programme to print base 10 numbers
 * Return: 0 on success
 */

int main(void)
{
	int ch;

	ch = 0;

	while (ch < 10)
	{
		printf("%d", ch);
		ch++;
	}
	printf("\n");
	return (0);
}
