#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - a function that adds
 * a new node at the end of a list
 * @head: pointer to our structure
 * @str: a pointer to given strings
 * Return: NULL if new_node_end
 * is null, else return new_node_end
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node_end = NULL;
	list_t *temp = NULL;

	temp = *head;

	new_node_end = malloc(sizeof(list_t));

	if (new_node_end == NULL)
	{
		return (NULL);
	}

	new_node_end->str = strdup(str);
	new_node_end->len = strlen(str);
	new_node_end->next = NULL;

	if (*head == NULL)
	{
		*head = new_node_end;
		return (*head);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = new_node_end;

	return (new_node_end);
}
