#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Prints the details of a dog
 * @d: Pointer to the dog structure
 *
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\nAge: %f\nOwner: %s\n",
		       d->name != NULL ? d->name : "(nil)",
		       d->age,
		       d->owner != NULL ? d->owner : "(nil)");
	}
}
