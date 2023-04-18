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
		return;
	}
	if (d->name == NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("%s\n", d->name);
	}

	if (d->age == NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("f\n", d->age);
	}
	if (d->owner == NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("%s\n", d->owner);
	}
}
