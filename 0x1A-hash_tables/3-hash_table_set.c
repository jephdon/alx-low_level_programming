#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>

/**
 * hash_table_set - Adds or updates a key-value pair in the hash table
 * @ht: The hash table to add or update the key/value in
 * @key: The key (cannot be empty)
 * @value: The value associated with the key (must be duplicated)
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *current;
	/* Check if the inputs are valid  */
	if (ht == NULL || key == NULL || *key == '\0')
		return (0);
	/* Figure out which index (drawer) to use */
	index = key_index((const unsigned char *)key, ht->size);
	/* Check if the key already exists in the drawer */
	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value); /* Throw out the old value */
			current->value = strdup(value); /* Copy the new value */
			if (current->value == NULL)
				return (0);
			return (1);
		}
		current = current->next;
	}
	/* Key not found, so create a new node (folder) */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	/* Copy key into the new node (folder) */
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	/* Copy the value into the new node (folder) */
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	/* Put the folder at the front of the drawer */
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
