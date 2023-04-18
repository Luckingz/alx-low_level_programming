#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Function to initialize variable of type struct dog
 * @d: Variable 1
 * Return: 0 on success
 */

void print_dog(struct dog *d)
{
	if (d->name == NULL || d->age == NULL || d->owner)
	{
		return ("nil");
	}
	if (d->name == NULL)
	{
		return ('\0');
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
