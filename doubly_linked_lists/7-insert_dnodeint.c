#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - a function that
 * adds a new node at a given position
 * @h: a pointer to a given
 * double linked list
 * @idx: the position we needs
 * to insert the new node
 * @n: the int value given
 * to our new node
 * Return: NULL if new_node
 * can't be created or return the new_node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h;
	dlistint_t *new_node = NULL;
	unsigned int count = 0;

	if (h == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;

	while (temp != NULL)
	{
		count++;
		if (count == idx)
		{
			new_node->prev = temp;
			new_node->next = temp->next;
			temp->next = new_node;

			return (new_node);
		}
		temp = temp->next;
	}
	return (new_node);
}