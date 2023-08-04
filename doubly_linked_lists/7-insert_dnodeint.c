#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * idx_is_zero - my function to
 * verify if idx = zero
 * @new_node: a new node
 * to be created
 * @h: a pointer to a given
 * double linked list
 * @n: the value we put
 * into the new node
 * Return: a created new node;
 */

dlistint_t *idx_is_zero(dlistint_t **h, dlistint_t *new_node, int n)
{
		new_node->n = n;
		new_node->prev = NULL;
		new_node->next = *h;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
}

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
	dlistint_t *temp = *h, *new_node = NULL;
	unsigned int count = 0;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	if (h == NULL)
	{
		new_node->n = n;
		new_node->next = NULL;
		new_node->prev = NULL;
		return (new_node);
	}
	if (idx == 0)
		idx_is_zero(h, new_node, n);

	while (temp != NULL)
	{
		count++;

		if (temp->next == NULL && count < idx)
			return (NULL);

		if (count == idx)
		{
			new_node->n = n;
			new_node->prev = temp;
			new_node->next = temp->next;
			temp->next = new_node;
			temp->next->prev = new_node;
			temp->next = new_node;

			return (new_node);
		}
		temp = temp->next;
	}

	return (NULL);
}
