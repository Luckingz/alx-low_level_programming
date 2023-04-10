#include <stdio.h>
#include <stdlib.h>

/**
 * main - Programme that adds positive numbers
 * @argc: Argument counter
 * @argv: Argument vector
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	int result = 0;
	int i = 0;

	if (argc > 1)
	{
		for (; i < argc; i++)
		{
			result += atoi(argv[i]);
		}
		printf("%d\n", result);
	}
	else if (argc < 1)
	{
		printf("0\n");
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
