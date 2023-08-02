#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - a function that add
 * a new node at the begining of a
 * double linked list
 * @head: a pointer to the
 * double linked list
 * @n: a constant int value to
 * be implemented in new_node
 * Return: the new created node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;

	if (head == NULL)
	{
		(*head)->prev = new_node;
	}

	*head = new_node;
	return (*head);
}
