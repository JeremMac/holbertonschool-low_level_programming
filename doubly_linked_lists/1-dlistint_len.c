#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * dlistint_len - a function that returns
 * the number of nodes in a double
 * linked list
 * @h: a pointer to the list we need
 * to work with
 * Return: the size_t number of nodes
 * in the given double linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t length = 0;

	if (h == NULL)
	{
		return (length);
	}

	while (temp != NULL)
	{
		length++;
		temp = temp->next;
	}
	return (length);
}
