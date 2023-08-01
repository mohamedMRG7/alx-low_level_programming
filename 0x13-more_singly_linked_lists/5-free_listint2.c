#include <stddef.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
* free_listint2 - check the code
* @head:h
* Return: Always 0.
*/
void free_listint2(listint_t **head)
{
	if (*head == NULL || head == NULL)
		return;
	if ((*head)->next != NULL)
		free_listint2(&((*head)->next));
	free(*head);
	*head = NULL;
}
