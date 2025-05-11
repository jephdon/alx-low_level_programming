#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - Creates a hash table with a given size
 * @size: The size of the array--The number of slots int the hash table
 *
 * Return: A pointer to the new hash table, or NULL if something went wrong
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	unsigned long int i = 0;

	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);
	new_table->size = size;
	/* Allocate memory for the array of pointers (the slots) */
	new_table->array = malloc(sizeof(hash_node_t *) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}
	/* Make sure each array or slot starts empty */
	while (i < size)
	{
		new_table->array[i] = NULL;
		i++;
	}
	return (new_table);
}
