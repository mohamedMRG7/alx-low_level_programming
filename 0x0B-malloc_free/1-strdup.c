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
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	arr = malloc(sizeof(str) * i);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}
