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
	printf("%s\n", d->name ? d->name : "(nil)");
	printf("%f\n", d->age ? d->age : 0.0);
	printf("%s\n", d->owner ? d->owner : "(nil)");
}
