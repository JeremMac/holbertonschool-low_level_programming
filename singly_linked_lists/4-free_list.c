#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *
 */

void free_list(list_t *head)
{ 
	list_t temp = NULL;

	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
