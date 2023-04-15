#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Programme that adds positive numbers
 * @argc: Argument counter
 * @argv: Argument vector
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	int result = 0;
	int i;
	char *p;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (p = argv[i]; *p; p++)
		{
			if (!isdigit(*p))
			{
				printf("Error\n");
				return (1);
			}
		}
		result += atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
