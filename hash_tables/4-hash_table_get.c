#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"
#include <string.h>

/**
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t  *temp;
	unsigned long int index;

	if (ht == NULL)
	{
		return (0);
	}


	if(key == NULL || key[0] == '\0')
	{
		return (NULL);
	}

	index = key_index((const unsigned char *) key, ht->size);

	temp = ht->array[index];

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			return (temp->value);
		}
		temp = temp->next;
	}
	return (0);
}
