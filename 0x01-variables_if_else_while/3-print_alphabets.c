#include <stdio.h>

/**
 * main - A programme to print lowercase alphabets and upper case alphabets
 * Return: 0 on success
 */

int main(void)
{
	char ch = 'a';
	char ch1 = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	while (ch1 <= 'Z')
	{
		putchar(ch1);
		ch1++;
	}
	putchar('\n');
	return (0);
}
