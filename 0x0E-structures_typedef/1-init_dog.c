#include "dog.h"
#include <stdio.h>

/**
 * init_dog - Function to initialize variable of type struct dog
 * @d: Variable 1
 * @name: Name of Dog
 * @age: Age of Dog
 * @owner: Owner of Dog
 * Return: 0 on success
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		*name = &name;
		age = age;
		*owner = &owner;
	}
	return (0);
}
