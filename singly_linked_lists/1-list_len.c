#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - a function that return
 * the number of elements in a given list
 * @h: a pointer to the list we need to count
 * Return: the number of elements
 * in the list
 */

size_t list_len(const list_t *h)
{
	size_t length = 0;

	while (h != NULL)
	{
		h = h->next;
		length++;
	}
	return (length);
}
