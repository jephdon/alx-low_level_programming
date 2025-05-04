#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes the node at a given index
 * @head: Pointer to the pointer to the head of the list
 * @index: Index of the node to delete, starting at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current; /* Pointer to move throught the list */
	listint_t *temp; /* Pointer to hold the node to be deleted */
	unsigned int i = 0; /* Tracks our position in the list */

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	/* Move to the node to be deleted */
	current = *head;
	while (current != NULL && i < index - 1)
	{
		current = current->next;
		i++;
	}
	if (current == NULL || current->next == NULL)
		return (-1);
	/* Delete the box at the index */
	temp = current->next;
	current->next = temp->next;
	free(temp);
	return (1);
}
