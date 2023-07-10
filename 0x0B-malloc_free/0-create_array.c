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
	unsigned int i;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(c) * size);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}
