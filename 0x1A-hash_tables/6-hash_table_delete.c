#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - Deletes a hash table and frees all its memory
 * @ht: The hash table to delete
 *
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *current, *temp;

	if (ht == NULL)
		return;
	/* Loop through each node (slot) in the array */
	while (i < ht->size)
	{
		current = ht->array[i];
		/* Free each node in the linked list at this slot */
		while (current != NULL)
		{
			temp = current;
			current = current->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
