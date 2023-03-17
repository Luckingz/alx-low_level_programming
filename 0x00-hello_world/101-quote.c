#include <unistd.h>

/**
 * main: A C programme that prints a text, followed by a new lie, to the
 * standard error.
 * Function: Ends the code.
 */
int main(void)
{
	const char *str = "and that piece of art useful\"
		- Dora Korpar, 2015-10-19\n";
	const char *ptr = str;
	size_t len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	write(1, ptr, len);
	return (0);
}
