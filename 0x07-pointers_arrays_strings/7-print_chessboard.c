#include "main.h"

/**
 * print_chessboard - A function to print the chessboard
 * @a: Array name
 * Return: NULL
 */

void print_chessboard(char (*a)[8])
{
	int n = 0;
	int m = 0;

	while (a != '\0')
	{
		for (n = 0; n < 8; n++)
		{
			for (m = 0; m < 8; m++)
			{
				_putchar(a[n][m]);
			}
			_putchar("\n");
		}
		break;
	}
}
