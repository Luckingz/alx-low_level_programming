#include <stdio.h>
#include <stdlib.h>

/**
 * main - Programme that prints the number of coins
 * @argc: Argument counter
 * @argv: Argument vector
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int numb1 = 0;
	int numb2 = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	numb1 = atoi(argv[1]);

	if (numb1 < 0)
	{
		printf("0\n");
		return (0);
	}
	while (numb1 > 0)
	{
		if (numb1 >= 25)
		{
			numb1 -= 25;
		}
		else if (numb1 >= 10)
		{
			numb1 -= 10;
		}
		else if (numb1 >= 5)
		{
			numb1 -= 5;
		}
		else if (numb1 >= 2)
		{
			numb1 -= 2;
		}
		else
			numb1 -= 1;
		numb2++;
	}
	printf("%d\n", numb2);
	return (0);
}
