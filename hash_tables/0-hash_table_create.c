#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - create
 * a hash table
 * @size: the usigned int value
 * tht determine the size of our
 * hash table
 * Return: the created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	hash_node_t **table_node;

	new_table = malloc(sizeof(hash_table_t));

	if (new_table == NULL)
	{
		return (NULL);
	}

	new_table->size = size;

	table_node = malloc(sizeof(hash_node_t *) * size);

	if (table_node == NULL)
	{
		free(new_table);
		return (NULL);
	}

	new_table->array = table_node;

	return (new_table);
}
