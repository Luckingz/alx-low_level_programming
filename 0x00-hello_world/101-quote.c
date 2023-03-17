#include <unistd.h>

/**
 * main - A C programme that prints a text, followed by a new lie, to the
 * standard error.
 * Return: Ends the code.
 */
int main(void)
{
	const char *message = "and that piece of art useful\"
		- Dora Korpar, 2015-10-19\n";
	const char *ptr = message;
	int length = 0;
	while (*ptr)
	{
		length++;
	}
	write(STDERR_FILENO, message, length);
	return (1);
}
