#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - function to delete the head node and return its data
 * @head: pointer to a pointer of first node
 * Return: data of head node
 */
int pop_listint(listint_t **head)
{
	listint_t *trav;
	int d;

	if (*head == NULL)
		return (0);

	trav = *head;
	d = trav->n;
	*head = head->next;
	free(trav);

	return (d);
}
