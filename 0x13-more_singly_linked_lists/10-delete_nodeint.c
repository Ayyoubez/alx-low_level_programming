#include "lists.h"
/**
*delete_nodeint_at_index - delete a node
*@head: parameter
*@index: parameter
*Return: result
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t *point = NULL;
	unsigned int i = 0;

	if (*head == NULL)
	{
		free(tmp);
		return (-1);
	}
	if (index == 0)
	{
		*head = tmp->next;
		return (1);
	}
	while (i < index - 1)
	{
		tmp = tmp->next;
		i++;
	}
	point = tmp->next;
	tmp->next = point->next;
	free(point);
	return (1);
}
