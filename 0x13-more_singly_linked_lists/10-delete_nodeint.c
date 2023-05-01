#include "lists.h"
/**
*delete_nodeint_at_index - delete a node
*@head: parameter
*@index: parameter
*Return: result
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *tmpnext;
	unsigned int i = 0;

	if (*head == NULL || head == NULL)
		return (-1);
	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
	}
	else
	{
		tmp = *head;
		while (i < index && tmp != NULL)
		{
			tmp = tmp->next;
			i++;
		}
		if (tmp == NULL || tmp->next == NULL)
			return (-1);
		tmpnext = tmp->next;
		tmp->next = tmpnext->next;
	}
		free(tmpnext);
		return (1);
}
