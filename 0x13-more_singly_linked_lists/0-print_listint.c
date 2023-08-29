#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_listint - entry point to listing all the elements in a list
 * @h: pointer to the first node
 * Return: number of elements
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		n++;
		h = h->next;
	}
	return (n);
}

