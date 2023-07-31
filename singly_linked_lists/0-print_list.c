#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list - a funtion that prints
 * all the elements of a list_t list
 * @h: a pointer to the given list
 * Return: the n numbers of nodes
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%u] %s\n", h->len, h->str);
			n++;
			h = h->next;
		}
		else
		{
			printf("[0] (nil)\n");
			n++;
			h = h->next;
		}
	}

	return (n);
}
