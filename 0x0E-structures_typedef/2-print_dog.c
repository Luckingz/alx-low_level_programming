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
		printf("nil\n");
		return;
	}
	if (d->name == NULL || d->age == NULL || d->owner)
	{
		printf("nil\n");
		return;
	}
	printf("%s\n", d->name);
	printf("%s\n", d->age);
	printf("%s\n", d->owner);
}
