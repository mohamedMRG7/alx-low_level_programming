#include <stddef.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
* add_node_end - check the code
* @head:h
* @str:s
* Return: Always 0.
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	list_t *temp;

	temp = *head;
	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	node->str = strdup(str);
	node->len = strlen(str);
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
