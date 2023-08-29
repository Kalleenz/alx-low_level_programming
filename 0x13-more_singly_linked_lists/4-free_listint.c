#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * free_listint - entry point to free list
 * @head: pointer to the first node
 */
void free_listint(listint_t *head)
{
	listint_t *trav;

	trav = head;
	while (trav->next != NULL)
	{
		trav = trav->next;
		free(trav->n);
		free(trav);
	}
}
