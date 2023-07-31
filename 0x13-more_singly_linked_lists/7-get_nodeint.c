#include <stddef.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
* get_nodeint_at_index - check the code
* @h:h
*@index:i
* Return: Always 0.
*/
listint_t *get_nodeint_at_index(listint_t *h, unsigned int index)
{
	unsigned int i;

	i = 0;
	while (h != NULL)
	{
		if (i == index)
			return (h);
		h = h->next;
		i++;
	}
	return (NULL);
}
