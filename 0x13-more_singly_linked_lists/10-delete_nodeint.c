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
	previous = NULL;
	tmp = *head;
	while (tmp != NULL && i < index - 1)
	{
		previous = tmp;
		tmp = tmp->next;
		i++;
	}
	if (tmp == NULL)
		return (-1);
	if (previous != NULL)
		previous = tmp->next;
	else
		*head = tmp->next;
	free(tmp);
	return (1);
}
