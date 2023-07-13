#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
* array_range - check the code
* @min :m
* @max :m
* Return: Always 0.
*/
int *array_range(int min, int max)
{
	int *arr;
	int size;
	int i;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i <= max; i++)
		arr[i] = min + i;
	return (arr);
}
