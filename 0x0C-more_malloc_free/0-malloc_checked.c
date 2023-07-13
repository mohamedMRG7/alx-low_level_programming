#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
* malloc_checked - check the code
* @b : b
* Return: Always 0.
*/
void *malloc_checked(unsigned int b)
{
	void *c;

	c = malloc(b);
	if (c == NULL)
		exit(98);
	return (c);
}
