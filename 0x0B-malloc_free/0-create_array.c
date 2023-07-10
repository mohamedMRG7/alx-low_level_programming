#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
* create_array - check the code
* @size : size
* @c :c
* Return: Always 0.
*/
char *create_array(unsigned int size, char c)
{
	char *arr;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(c) * size);
	*arr = c;
	return (arr);
}
