#include <stdio.h>
#include <unistd.h>

/**
 * main - A C programme that prints a text, followed by a new lie, to the
 * standard error.
 * Return: Ends the code.
 */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
			return (1);
}
