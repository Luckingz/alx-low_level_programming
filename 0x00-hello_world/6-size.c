#include <stdio.h>
/**
 * main - A programme to prints the size of various types
 * on the computer it is compiled on
 * Return: Ends the programme
 */
int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long));
	printf("Size of a long long int: %d byte(s)\n", sizeof(unsigned long));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
