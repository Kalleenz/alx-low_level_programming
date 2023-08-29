#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - inserting node at a particular position
 * @head: pointer to first node
 * @index: the eaxct number of node starting from 0
 * Return: the node position
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *trav;

	if (head == NULL)
		return (NULL);

	trav = head;
	for (i = 0; i < index && trav != NULL; i++)
	{
		trav = trav->next;
	}
	return (trav);
}
