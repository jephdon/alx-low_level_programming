#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list
 * @head: Pointer to the pointer to the head of the list
 * @str: String to be added to the new node
 *
 * Return: Address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *current;
	char *str_copy;

	/* Check if the string is NULL */
	if (str == NULL)
		return (NULL);

	/* Duplicate the string */
	str_copy = strdup(str);
	if (str_copy == NULL)
		return (NULL);

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(str_copy);
		return (NULL);
	}

	/* Fill the new node with data */
	new_node->str = str_copy;
	new_node->len = 0;
	while (str_copy[new_node->len] != '\0')
		new_node->len++;
	new_node->next = NULL;

	/* If the list is empty, make this the first node */
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		/* Find the last node in the list */
		current = *head;
		while (current->next != NULL)
			current = current->next;
		/* Hook the new node to the end */
		current->next = new_node;
	}
	return (new_node);
}
