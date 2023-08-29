#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletion of nodes at a given index
 * @head: pointer to a pointer of the first node
 * @index: the point that deletion takes place
 * Return: an integer
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *trav;
	listint_t *prev;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		trav = *head;
		*head = (*head)->next;
		free(trav);
		return (1);
	}

	trav = *head;
	for (i = 0; i < index && trav != NULL; i++)
	{
		prev = trav;
		trav = trav->next;
	}
	if (trav == NULL)
	{
		return (-1);
	}
	prev->next = trav->next;
	free(trav);
	return (1);
}
