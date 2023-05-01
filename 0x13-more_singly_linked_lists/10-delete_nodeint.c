#include "lists.h"
/**
*delete_nodeint_at_index - delete a node
*@head: parameter
*@index: parameter
*Return: result
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *previous;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		return (1);
	}
	tmp = *head;
	while (i < index - 1)
	{
		if (tmp == NULL || tmp->next == NULL)
			return (1);
		tmp = tmp->next;
		i++;
	}
	previous = tmp->next;
	tmp->next = previous->next;
	free(previous);
	return (1);
}
