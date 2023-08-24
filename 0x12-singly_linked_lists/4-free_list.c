#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - entry point to free a linked list
 * @head: beginning of a node
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
