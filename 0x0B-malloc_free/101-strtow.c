#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
* create_array - check the code
* @size : size
* @c :c
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
			size ++;
		if(str[i] == ' ' && str[i + 1] != '\0' && str[i + 1] != ' ')
			rows++;
	}
	arr = malloc(sizeof(char) * rows + 1);
	coulmn = 0;
	rows = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if(str[i] == ' ')
			continue;
		if (str[i] != ' ')
		{
			coulmn++;
		}
		if (str[i + 1] == ' ' || str[i + 1] == '\0')
		{
			printf("coulmns : %d , rows : %d , I :%d\n",coulmn,rows,i);
			arr[rows] = malloc(sizeof(char *) * coulmn);
			coulmn = 0;
			rows++;
		}
	}
	printf("R: %d \n" , rows);
	arr[rows] = malloc(sizeof(char *) * 1);
	if(arr == NULL)
	{
		free(arr);
		return NULL;
	}
	j = 0;
	coulmn = 0;
	isfirst = 1;
	for (i = 0; i < rows; i++)
	{
		while (str[j] != '\0')
		{
			if(str[j] != ' ')
			{
				if(isfirst)
				{
					i = 0;
					isfirst = 0;
				}
				printf("coulmn : %d  , row :%d , J : %c\n",coulmn,i,str[j]);
				arr[i][coulmn] = str[j];
				printf("%c \n" , arr[i][coulmn]);
				coulmn++;
			}
			if (str[j] == ' ' && str[j + 1] != '\0'
			    && str[j + 1] == ' ' ){
				j++;
			        continue;
			}
			if (str[j] == ' ' && str[j + 1] != ' ' )
			{
				j++;
				break;
			}
			j++;
		}
		coulmn = 0;
		printf("Row Value: %s , Row : %d\n" , arr[i],i);
	}
	arr[rows][0] = '\0';
	return (arr);
}
