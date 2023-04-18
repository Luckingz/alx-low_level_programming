#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A structure for Dogs
 * @name: Name of Dogs
 * @age: Age of Dogs
 * @owner: Owner of Dogs
 *
 * Description: A structure for Dogs of different owners, breed, age and names;
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
