#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - a function that create
 * a new node
 * @head: point to a pointer to
 * the head of the list
 * @str: point to the string to be
 * assigned in the new node
 * Return: NULL if new_node is NULL or the
 * new node
 */

list_t *add_node(list_t **head, const char *str)
{

	list_t *new_node;


	new_node = malloc(sizeof(list_t));

	if(new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
