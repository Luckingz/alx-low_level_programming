#include <stdio.h>

/**
 * main - Programme to print number of arguments
 * @argc: Argument counts
 * @argv: Argument vector
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	(void) *argv;

	printf("%d\n", argc);

	return (0);
}
