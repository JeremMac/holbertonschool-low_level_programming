#include <stdio.h>
#include "hash_tables.h"

/**
 * key_index - a function that
 * gives the index of a key
 * @key: a pointer to the keys
 * of our hash table
 * @size: a given size to
 * find the corresponding
 * key
 * Return: the result of our search
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int result = 0;

	result = hash_djb2(key);

	return (result % size);
}
