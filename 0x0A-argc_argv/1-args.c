#include <stdio.h>

/**
 * main - Programme to print number of arguments
 * @argc: Argument counts
 * @argv: Argument vector
 * Return: 0 always
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
