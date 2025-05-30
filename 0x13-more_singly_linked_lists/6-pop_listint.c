#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes the head node of a listint_t linked list
 * @head: Double pointer to the head of the list
 *
 * Return: The data head node's data (n), or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	/* Hold the head node and its data */
	listint_t *temp;
	int data;

	if (head == NULL || *head == NULL)
		return (0);
	temp = *head;
	data = temp->n;
	*head = temp->next;
	free(temp);
	return (data);
}
