#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
* strtow - check the code
* @str : size
* Return: Always 0.
*/
char **strtow(char *str)
{
	char **arr;
	int i;
	int size;
	int rows;
	int j;
	int coulmn;
	int isfirst;

	rows = 0;
	size = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
			size++;
		if (str[i] == ' ' && str[i + 1] != '\0' && str[i + 1] != ' ')
			rows++;
	}
	if (str == NULL || rows == 0)
		return (NULL);
	arr = malloc(sizeof(char **) * rows + 1);
	coulmn = 0;
	rows = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
			continue;
		if (str[i] != ' ')
			coulmn++;
		if (str[i + 1] == ' ' || str[i + 1] == '\0')
		{
			arr[rows] = malloc(sizeof(char) * coulmn);
			coulmn = 0;
			rows++;
		}
	}
	arr[rows] = malloc(sizeof(char *) + 14);
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	j = 0;
	coulmn = 0;
	isfirst = 1;
	for (i = 0; i < rows; i++)
	{
		while (str[j] != '\0')
		{
			if (str[j] != ' ')
			{
				if (isfirst)
				{
					i = 0;
					isfirst = 0;
				}
				arr[i][coulmn] = str[j];
				coulmn++;
			}
			if (str[j] == ' ' && str[j + 1] != '\0'
			    && str[j + 1] == ' '){
				j++;
				continue;
			}
			if (str[j] == ' ' && str[j + 1] != ' ')
			{
				j++;
				break;
			}
			j++;
		}
		coulmn = 0;
	}
	arr[rows] = NULL;
	return (arr);
}
