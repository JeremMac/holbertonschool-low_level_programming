#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_print - functon that
 * prints a hash table
 * @ht: a pointer to the has table
 * we need to print
 * Return: nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0;
	int comma = 0;
	hash_node_t *temp;

	if (ht == NULL)
	{
		return;
	}

	printf("{");

	for (index = 0; index < ht->size; index++)
	{
		if(ht->array[index] != NULL)
		{
			if(comma == 1)
			{
				printf(", ");
			}
			temp = ht->array[index];

			while (temp != NULL)
			{
				printf("'%s': '%s'", temp->key, temp->value);
				temp = temp->next;
				if (temp != NULL)
				{
					printf(", ");
				}
			}
			comma = 1;
		}
	}

	printf("}\n");
}
