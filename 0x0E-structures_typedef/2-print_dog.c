#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - Function to initialize variable of type struct dog
 * @d: Variable 1
 * Return: 0 on success
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("(nil)\n");
		return;
	}
	if (d->name == NULL)
	{
		printf("(nil)\n");
		return;
	}
	else
	{
		printf("%s\n", d->name);
	}
	printf("%f\n", d->age);

	if (d->owner == NULL)
	{
		printf("(nil)\n");
	}
	else
	{
		printf("%s\n", d->owner);
	}
}
