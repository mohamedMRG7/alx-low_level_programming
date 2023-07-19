#include <stddef.h>
#include "function_pointers.h"
#include <stdio.h>

/**
* int_index - check the code
* @array:n
*@size:f
*@cmp:a
* Return: Always 0.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) > 0)
				return (i);
		}
	} else
		return (-1);
	return (-1);
}
