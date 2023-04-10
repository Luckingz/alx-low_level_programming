#include <stdio.h>

/**
 * main - Programme that prints all arguments
 * @argc: Argument counter
 * @argv: Argument vector
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
