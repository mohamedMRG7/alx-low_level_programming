#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
* str_concat - check the code
* @str : size
* @s2 : s
* Return: Always 0.
*/
int **alloc_grid(int width, int height)
{
	int **arr;
	int i;
	int j;
	
	if (width <= 0 || height <= 0)
		return (NULL);
	arr = (int**)malloc(sizeof(int *) * width);
	for  (i = 0; i < width; i++)
		arr[i] = (int*)malloc(sizeof(int) * height);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
		for (j = 0; j < height; j++)
			arr[i][j] = 0;
	return (arr);
}
