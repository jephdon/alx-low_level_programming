#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list
 * @head: Pointer to the pointer to the head of the list
 * @str: String to be added to the new node
 *
 * Return: Address of the new element, or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *str_copy;
	unsigned int len = 0, i = 0;

	/* Calculate string length */
	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		len++;
		i++;
	}

	/* Make a copy of the string */
	str_copy = strdup(str);
	if (str_copy == NULL)
		return (NULL);

	/* Make space for the new node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(str_copy);
		return (NULL);
	}

	/* Fill the new node with info */
	new_node->str = str_copy;
	new_node->len = len;
	new_node->next = *head; /* Link it to the old head */

	/* Make the new node the new head */
	*head = new_node;
	return (new_node);
}
