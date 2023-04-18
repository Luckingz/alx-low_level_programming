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
	if (d->name == NULL || d->age == NULL || d->owner == NULL)
	{
		printf("(nil)\n");
	}
	else
	{
		printf("%s\n", d->name);
		printf("%f\n", d->age);
		printf("%s\n", d->owner);
	}
}
