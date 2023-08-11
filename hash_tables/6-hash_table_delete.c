#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_delete - a function
 * that delete a hash table
 * @ht: a pointer to the hash
 * table we want to delete
 * Return: nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_table_t *head = ht;
	hash_node_t *current, *temp;

	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index] != NULL)
		{
			current = ht->array[index];
			while (current != NULL)
			{
				temp = current->next;
				free(current->key);
				free(current->value);
				free(current);
				current = temp;

			}
		}
	}
	free(head->array);
	free(head);
}
