#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adding to the beginning of a linked list
 * @head: pointer to the pointer of the first node
 * @str: string pointer
 * Return: address of the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *addptr;

	if (str == NULL)
	{
		return (NULL);
	}
	addptr = malloc(sizeof(list_t));
	if (addptr == NULL)
	{
		return (NULL);
	}
	addptr->str = strdup(str);
	if (addptr->str == NULL)
	{
		free(addptr);
		return (NULL);
	}
	addptr->len = strlen(str);
	addptr->next = *head;
	*head = addptr;

	return (addptr);
}
