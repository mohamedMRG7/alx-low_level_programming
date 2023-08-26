#include <stddef.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;

	while (*head != NULL)
	{
		listint_t *next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}
