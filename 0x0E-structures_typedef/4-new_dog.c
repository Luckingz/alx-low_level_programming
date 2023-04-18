#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - Function that creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 * Return: 0 on success
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	dog_t *new_dog_list = (dog_t *) malloc(sizeof(dog_t));

	if (dog == NULL)
	{
		return (NULL);
	}
	new_dog_list->name = (char *) malloc(_strlen(name) + 1);
	if (new_dog_list->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	_strcpy(new_dog_list->name, name);

	new_dog_list->owner = (char *) malloc(_strlen(owner) + 1;
			if (new_dog_list->owner == NULL)
			{
			free(new_dog_list->name);
			free(new_dog_list);
			return (NULL);
			}
		_strcpy(new_dog_list->owner, owner);

	new_dog_list->age = age;
	return (new_dog_list);
}


/**
 * _strlen - A Fucntion that retuns the length
 * of a string
 * @s: Variable to be returned
 * Return: always 0
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * _strcpy - Function to copy
 * @dest: destination
 * @src: source
 * Return: 0 on succes
 */

char *_strcpy(char *dest, char *src)
{
	char *result = dest;

	while (*src != '\0')
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (result);
}
