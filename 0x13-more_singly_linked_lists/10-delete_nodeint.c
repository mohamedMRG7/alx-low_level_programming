#include <stddef.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
* insert_nodeint_at_index - check the code
* @head:h
*@index:d
*Return: Always 0.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node, *temp;
	unsigned int count;

	count = 0;
	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	current_node = *head;
	while (current_node != NULL)
	{
		if (count == index - 1)
		{
			temp = current_node->next;
			if (temp != NULL)
			{
				current_node->next = temp->next;
				free(temp);
				return (1);
			}
		}
		count++;
		current_node = current_node->next;
	}

	return (-1);
}
