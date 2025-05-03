#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a list_t list
 * @head: Pointer to the head of the list
 *
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *current; /* Points to the node we're freeing */

	while (head != NULL)
	{
		current = head;
		head = head->next; /* Move to the next node */
		free(current->str);
		free(current);
	}
}
