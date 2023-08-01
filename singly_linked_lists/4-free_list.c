#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - a function to free
 * the allocated memory in a linked
 * list
 * @head: a pointer to the
 * linked list we want to free
 * Return: nothing
 */

void free_list(list_t *head)
{

	list_t *temp = NULL;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
