#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_dlistint - prints all elements
 * of a dlistint list
 * @h: a pointer to the double
 * linked list we want to print
 * Return: the number od nodes
 * in our list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t length = 0;
	dlistint_t *temp;

	temp = h->next;
	temp = temp->prev;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		length++;
		temp = temp->next;
	}
	return (length);
}
