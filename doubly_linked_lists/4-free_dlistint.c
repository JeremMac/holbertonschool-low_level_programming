#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - a function that
 * free the allocated memory of a
 * double liked list
 * @head: a pointer to the
 * list to be freed
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}

}
