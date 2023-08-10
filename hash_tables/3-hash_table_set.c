#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *temp;
	hash_node_t *new_node;
	unsigned long int index;

	index = key_index((const unsigned char *) key, ht->size);

	if (key == NULL || key[0] == '\0')
	{
		return (0);
	}
	if (ht == NULL)
	{
		return (0);
	}

	temp = ht->array[index];

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (1);
		}
		temp = temp->next;
	}
	new_node = malloc(sizeof(hash_node_t) * ht->size);
	if (new_node == NULL)
	{
		return (0);
	}

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
