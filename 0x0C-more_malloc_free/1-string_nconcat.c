#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
* string_nconcat - check the code
* @str : size
* @s2 : s
* @n : n
* Return: Always 0.
*/
char *string_nconcat(char *str, char *s2, unsigned int n)
{
	char *arr;
	char empty[1];
	int i;
	int size;
	int size2;

	empty[0] = '\0';
	if (str == NULL)
		str = empty;
	if (s2 == NULL)
		s2 = empty;
	i = 0;
	while (str[i] != '\0')
		i++;
	size = i;
	i = 0;
	while (s2[i] != '\0')
		i++;
	size2 = i;
	if ((int)n < size2)
		size2 = (int)n;
	arr = malloc((sizeof(char) * size) + (sizeof(char) * size2) + 1);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = str[i];
	for (i = size; i < size2 + size; i++)
		arr[i] = s2[i - size];
	return (arr);
}
