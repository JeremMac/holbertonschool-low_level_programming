#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *
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
