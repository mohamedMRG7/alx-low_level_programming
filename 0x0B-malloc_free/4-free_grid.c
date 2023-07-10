#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
* free_grid - check the code
* @grid : size
* @height :c
* Return: Always 0.
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
