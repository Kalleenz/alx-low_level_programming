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

	while (head != NULL)
	{
		trav = head;
		head = head->next;
		free(trav);
	}
}
