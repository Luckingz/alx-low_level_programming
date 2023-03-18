#include <stdio.h>

/**
 * main - Programme to print the Alphabets a to z
 * Function: 0 ends the programme
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	return (0);
}
