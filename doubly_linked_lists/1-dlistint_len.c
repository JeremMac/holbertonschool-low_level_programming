#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
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
