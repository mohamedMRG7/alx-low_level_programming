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
	return (malloc(b) == NULL ? exit(98) : malloc(b));
}
