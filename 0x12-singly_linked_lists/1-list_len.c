#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * list_len - returning the number of elemets of a linked list
 * @h: pointer to the first node
 * Return: lent
 */

size_t list_len(const list_t *h)
{
	size_t lent = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("0");
		else
		{
			h = h->next;
			lent++;
		}
	}
	return (lent);
}
