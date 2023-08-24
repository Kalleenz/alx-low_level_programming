#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - printing all the elements of a list
 * @h: pointer to the first node
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t num = 0;

	if (str == NULL)
	{
		printf("[0](nil)");
	}
	while (h->next != NULL)
	{
		printf("%s\n", h->str);
		h = h->next;
		num++;
	}
	return (num);
}
