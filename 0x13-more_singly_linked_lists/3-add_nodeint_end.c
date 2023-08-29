#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * add_nodeint_end - adding new node to the end of a list
 * @head: pointer to a pointer pointing to the first node of the list
 * @n: number to be added
 * Return: address of new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *trav;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head != NULL)
	{
		trav = *head;
		while (trav->next != NULL)
		{
			trav = trav->next;
		}
		trav->next = new;
	}
	else
	{
		*head = new;
	}
	return (new);
}
