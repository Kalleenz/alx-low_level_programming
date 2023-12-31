#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * free_listint2 - entry point to free nodes and keep head equals NULL
 * @head: pointer to the first node
 */
void free_listint2(listint_t **head)
{
	listint_t *trav;

	if (head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		trav = (*head)->next;
		free(*head);
		*head = trav;

	}
	*head = NULL;
}
