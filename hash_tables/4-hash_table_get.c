#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - a function that
 * retrive the value associated with
 * a key
 * @ht: a pointer to the hash table
 * we are parsing
 * @key: the given key we need to find
 * the value associated to
 * Return: NULL if no key can be found
 * or the value associeted with found key
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t  *temp;
	unsigned long int index;

	if (ht == NULL)
	{
		return (0);
	}


	if (key == NULL || key[0] == '\0')
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
