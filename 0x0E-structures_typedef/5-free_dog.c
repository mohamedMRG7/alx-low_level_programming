#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
#include <string.h>
/**
* free_dog - check the code
* @d:d
* Return: Always 0.
*/
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
