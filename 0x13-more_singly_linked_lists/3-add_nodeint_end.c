#include <stddef.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
* add_nodeint_end - check the code
* @head:h
* @n:n
* Return: Always 0.
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *temp;

	temp = *head;
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	while (*head)
	{
		if ((*head)->next != NULL)
			*head = (*head)->next;
		else
		{
			(*head)->next = node;
			break;
		}
	}
	*head = temp;
	return (node);
}
