#include <string.h>
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

	size = 0;
	size2 = 0;
	empty[0] = '\0';
	if (str == NULL)
		str = empty;
	if (s2 == NULL)
		s2 = empty;
	size = strlen(str);
	size2 = strlen(s2);
	if ((int)n < size2)
		size2 = (int)n;
	arr = malloc((sizeof(char) * size) + (sizeof(char) * size2) + 1);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = str[i];
	for (i = size; i < size2 + size; i++)
		arr[i] = s2[i - size];
	arr[i] = '\0';
	return (arr);
}
