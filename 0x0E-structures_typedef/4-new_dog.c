#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
#include <string.h>


/**
 * *new_dog - Initializes a dog structure
 * @name: Pointer to a string representing the dog's name
 * @age: Age of the dog
 * @owner: Pointer to a string representing the dog's owner
 * Return: 0
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		return (NULL);
	}
	d->name = malloc(strlen(name) + 1);
	if (d->name == NULL)
		return (NULL);
	strcpy(d->name, name);
	d->age = age;
	d->owner = malloc(strlen(owner) + 1);
	if (d->owner == NULL)
		return (NULL);
	strcpy(d->owner, owner);
	return (d);
}
