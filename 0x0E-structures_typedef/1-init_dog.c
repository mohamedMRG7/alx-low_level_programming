#include "dog.h"
#include <stdio.h>

/**
 * init_dog - Initializes a dog structure
 * @d: Pointer to the dog structure
 * @name: Pointer to a string representing the dog's name
 * @age: Age of the dog
 * @owner: Pointer to a string representing the dog's owner
 *
 * Description: This function initializes a dog structure with the given
 *              name, age, and owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
