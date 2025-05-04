#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * @head: Pointer to the pointer to the head of the list
 * @idx: Index where the new node should be added, starting at 0
 * @n: The integer to store in the new node
 *
 * Return: Address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *current; /* Pointer used to find the right spot */
	unsigned int i = 0; /* Counter to track our position */

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	/* Add node at the beginning if index is 0 */
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	/* Find the node just before the insertion point */
	current = *head;
	while (current != NULL && i < idx - 1)
	{
		current = current->next;
		i++;
	}
	/* Clean up if the spot doesn't exist */
	if (current == NULL || i != idx - 1)
	{
		free(new_node);
		return (NULL);
	}
	/* Link the new node into the chain */
	new_node->next = current->next;
	current->next = new_node;
	return (new_node);
}
