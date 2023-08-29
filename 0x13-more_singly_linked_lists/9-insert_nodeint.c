#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserting a node at a particular index
 * @head: pointer to a pointer of the first node
 * @idx: index of where new node would be attached to
 * @n: new node
 * Return: the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *trav;
	listint_t *new;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	trav = *head;
	for (i = 1; i < idx && trav != NULL; i++)
	{
		trav = trav->next;
	}
	if (trav == NULL)
	{
		free(new);
		return (NULL);
	}

	new->next = trav->next;
	trav->next = new;

	return (new);
}
