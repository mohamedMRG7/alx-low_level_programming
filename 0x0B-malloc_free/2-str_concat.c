#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
* str_concat - check the code
* @str : size
* @s2 : s
* Return: Always 0.
*/
char *str_concat(char *str, char *s2)
{
	char *arr;
	int i;
	int size;
	int size2;

	if (str == NULL)
		*str = '\0';
	if (s2 == NULL)
		*s2 = '\0';
	i = 0;
	while (str[i] != '\0')
		i++;
	size = i;
	i = 0;
	while (s2[i] != '\0')
		i++;
	size2 = i;
	arr = malloc((sizeof(char) * size) + (sizeof(char) * size2));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = str[i];
	for (i = size; i < size2 + size; i++)
		arr[i] = s2[i - size];
	return (arr);
}
