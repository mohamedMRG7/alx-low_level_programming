#include <string.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
* _calloc - check the code
* @nmemb:m
* @size :s
* Return: Always 0.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(sizeof(int) * nmemb * size);
	if (arr == NULL)
		return (NULL);
	memset(arr, 0, nmemb * size);
	return (arr);
}
