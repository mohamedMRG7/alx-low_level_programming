#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
* _strdup - check the code
* @str : size
* Return: Always 0.
*/
char *_strdup(char *str)
{
	char *arr;
	int i;
	int size;

	if (str == NULL)
		return NULL;
	i = 0;
	while (str[i] != '\0')
		i++;
	size = i - 1;
	arr = malloc(sizeof(str) * i);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = str[i];
	return (arr);
}
