#include "function_pointers.h"
#include <stdio.h>

/**
* array_iterator - check the code
* @array:n
*@size:f
*@action:a
* Return: Always 0.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < 5; i++)
			action(array[i]);
	}
}
