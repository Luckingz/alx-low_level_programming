#include <stdio.h>
#include <stdlib.h>

/**
 * main - Programme that multiplies two numbers
 * @argc: Argument counter
 * @argv: Argument vector
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	int result;
	(void) argc;

	if (argv[2] > 0 && argv[3])
	{
		result = *argv[2] * *argv[3];
		printf("%d", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
