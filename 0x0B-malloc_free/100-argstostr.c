#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
* create_array - check the code
* @size : size
* @c :c
* Return: Always 0.
*/
char *argstostr(int ac, char **av)
{
	char *arr;
        int i;
	int j;
	int total;

	total = 0;
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			total++;
			j++;
		}
	}
	arr = malloc(sizeof(char) * total + ac);
	total = 0;
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			arr[total] = av[i][j];
			total++;
			j++;
		}
		arr[total] = '\n';
		total++;
	}
	return (arr);
}
