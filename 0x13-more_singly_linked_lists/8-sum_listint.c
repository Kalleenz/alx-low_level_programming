#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - sum of all the values in the list
 * @head: pointer to the first node
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *trav;

	trav = head;
	while (trav != NULL)
	{
		sum += trav->n;
		trav = trav->next;
	}
	return (sum);
}
