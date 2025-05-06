#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Double pointer to the head of the list
 * @idx: Index where the new node should be added, starting at 0
 * @n: The integert to store in the new node
 *
 * Return: Address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *current;
	unsigned int i = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));
	/* Move to the given index */
	current = *h;
	while (current != NULL && i < idx)
	{
		current = current->next;
		i++;
	}
	/* return if the spot doesn't exist */
	if (current == NULL && i < idx)
		return (NULL);
	/* If we're at the end, add to the end */
	if (current == NULL)
		return (add_dnodeint_end(h, n));
	/* Create and Fill the new node and insert into the list */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = current;
	new_node->prev = current->prev;
	if (current->prev != NULL)
		current->prev->next = new_node;
	else
		*h = new_node; /* Update head if inserting at the beginning */
	current->prev = new_node;
	return (new_node);
}
