#include <stddef.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
* print_list - check the code
* @h:h
* Return: Always 0.
*/
size_t print_list(const list_t *h)
{
	unsigned int i;

	i = 0;
	while (h != NULL)
	{
		printf("[%d] %s\n", h->str != NULL ? h->len : 0
		       , h->str != NULL ? h->str : "(nil)");
		h = h->next;
		i++;
	}
	return (i);
}
