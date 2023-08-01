#include <stddef.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
* sum_listint - check the code
* @h:h
* Return: Always 0.
*/
int sum_listint(listint_t *h)
{
	int i;

	if (h == NULL)
		return (0);
	i = h->n;
	while (h != NULL)
	{
		h = h->next;
		if( h != NULL)
			i = i + h->n;
	}
	return (i);
}
