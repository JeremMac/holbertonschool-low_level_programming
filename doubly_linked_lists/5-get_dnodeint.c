#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - a function that
 * returns the nth node of a double linked list
 * @head: pointer to the double linked list
 * @index: unsigned int value of the index
 * of the double linked list
 * Return: null if nth node is null
 * or the nod matching with the given index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int count;

	if (head == NULL)
	{
		return (NULL);
	}

	temp = head;

	while (count <= index && temp != NULL)
	{
		if (temp == NULL)
		{
			return (NULL); 
		}
		if (count == index)
		{
			return (temp);
		}
		count++;
		temp = temp->next;
	}
	return (NULL);
}
