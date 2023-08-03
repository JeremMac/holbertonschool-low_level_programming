#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - a function that
 * return the sum of all the data
 * in a double linked list
 * @head: a pointer to a
 * double linked list
 * Return: the sum of the
 * n elements in the list
 * or zero if head is NULL
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
