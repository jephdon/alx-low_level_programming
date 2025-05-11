#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - Retrieves a value associated with a key
 * @ht: The hash table to look into
 * @key: The key you are looking for
 *
 * Return: The value associated with the key,
 * or NULL if the key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current;

	/* Check if the hash table or key is NULL or empty */
	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	/* Calculate the index where the key should be */
	index = key_index((const unsigned char *)key, ht->size);
	/* Search through the linked list at that index */
	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value); /* Found the key, return its value */
		current = current->next;
	}
	return (NULL);
}
