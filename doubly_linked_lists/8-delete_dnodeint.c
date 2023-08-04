#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - a funtion
 * to delete a given node in a double
 * linked list
 * @head: a pointer to a
 * given double linked list
 * @index: the index of the
 * node we want to delete
 * Return: 1 if the deletion
 * was completed or -1 if
 * head is NULL or the deletion
 * didn't succeded
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{

	dlistint_t *temp = *head;

	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (temp == NULL)
			return (-1);
		temp = temp->next;
	}

	if (temp == *head)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}

	else
	{
		temp->prev->next = temp->next;
		if (temp->next != NULL)
			temp->next->prev = temp->prev;
	}

	free(temp);
	return (1);
}
