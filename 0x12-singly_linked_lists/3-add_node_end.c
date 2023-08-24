#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - entry point to adding a node to the end of a linked list
 * @head: pointer to a pointer of the first node
 * @str: string to be added in the new node
 * Return: the new node added
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newptr;
	list_t *temp;

	if (str == NULL)
		return (NULL);
	newptr = malloc(sizeof(list_t));
	if (newptr == NULL)
		return (NULL);
	newptr->str = strdup(str);
	if (newptr->str == NULL)
	{
		free(newptr);
		return (NULL);
	}
	newptr->len = strlen(str);
	newptr->next = NULL;

	if (*head != NULL)
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newptr;
	}
	else
	{
		*head = newptr;
	}
	return (newptr);
}

