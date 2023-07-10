#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
* alloc_grid - check the code
* @width : size
* @height : s
* Return: Always 0.
*/
int **alloc_grid(int width, int height)
{
	int **arr;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = (int **)malloc(sizeof(int *) * width);
	if (arr == NULL)
		return (NULL);
	for  (i = 0; i < width; i++)
	{
		arr[i] = (int *)malloc(sizeof(int) * height);
		if (arr[i] == NULL)
			return NULL;
	}
	for (i = 0; i < width; i++)
		for (j = 0; j < height; j++)
			arr[i][j] = 0;
	return (arr);
}
