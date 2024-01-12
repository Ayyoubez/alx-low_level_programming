#include "lists.h"

/**
* delete_dnodeint_at_index - delete node at index
* @head: head pointer
* @index: node index
* Return: 1 if success -1 if not
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head, *previous = NULL, *nextnode = NULL;
	unsigned int count = 0, i = 0;

	if (*head == NULL)
		return (-1);
	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	if (index >= count)
		return (-1);
	current = *head;
	while (i < index)
	{
		previous = current;
		current = current->next;
		i++;
	}
	nextnode = current->next;
	if (previous != NULL)
		previous->next = nextnode;
	else
		*head = nextnode;
	if (nextnode != NULL)
		nextnode->prev = previous;
	free(current);
	return (1);
}
