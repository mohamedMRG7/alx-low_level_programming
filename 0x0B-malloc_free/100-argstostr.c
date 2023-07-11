#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
* argstostr - check the code
* @ac : size
* @av :c
* Return: Always 0.
*/
char *argstostr(int ac, char **av)
{
	char *arr;
	int i;
	int j;
	int total;

	if(ac == 0 || av == NULL)
		return NULL;
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
	if(arr == NULL)
	{
		free(arr);
		return NULL;
	}
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
