#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - A programme to print Random numbers
 * Return: To end the programme
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("is positive\n");
	} else if (n == 0)
	{
		printf("is zero\n");
	} else
	{
		printf("is negative\n");
	}
	return (0);
}
