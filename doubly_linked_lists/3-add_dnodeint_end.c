#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - a function that
 * adds a nobe in a double linked list backward
 * @head: pointer to a double linked list
 * @n: the element we insert in the nodes
 * Return: the new node created
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node_end = NULL;
	dlistint_t *temp = NULL;

	temp = *head;

	new_node_end = malloc(sizeof(dlistint_t));

	if (new_node_end == NULL)
	{
		return (NULL);
	}

	new_node_end->n = n;
	new_node_end->prev = *head;
	new_node_end->next = NULL;

	if (*head == NULL)
	{
		*head = new_node_end;
		new_node_end->prev = NULL; 
		return (*head);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = new_node_end;
	 new_node_end->prev = temp;

	return (new_node_end);
}
