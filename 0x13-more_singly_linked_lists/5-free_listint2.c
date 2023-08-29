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
	listint_t *copy;

	if (*head == NULL)
		return;
	
	trav = *head;
	while (trav != NULL)
	{
		copy = trav->next;
		free(trav);
		trav = copy;
	}
	*head = NULL;
}
