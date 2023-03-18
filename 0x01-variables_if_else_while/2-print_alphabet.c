#include <stdio.h>

/**
 * main - Programme to print the Alphabets a to z
 * Function: The function ends the programme
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
