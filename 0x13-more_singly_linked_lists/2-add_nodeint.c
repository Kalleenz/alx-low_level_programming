#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - entry point to add a node at the beginning
 * @head: pointer to a pointer of the first node
 * @n: number to be added
 * Return: address of new node added
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
