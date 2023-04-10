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
	int result = 0;

	if (argc >= 3)
	{
		int arg1 = atoi(argv[1]);
		int arg2 = atoi(argv[2]);

		if (arg1 > 0 && arg2 > 0)
		{
			result = arg1 * arg2;
			printf("%d\n", result);
		}
		else if (arg1 < 0 || arg2 < 0)
		{
			result = arg1 * arg2;
			printf("%d\n", result);
		}
		else if (arg1 == 0 || arg2 == 0)
		{
			result = arg1 * arg2;
			printf("%d\n", result);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
