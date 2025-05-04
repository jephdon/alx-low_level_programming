#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Frees a listint_t list
 * @head: pointer to the head of the list
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *current; /* Keeps track of the node we're cleaning */

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
