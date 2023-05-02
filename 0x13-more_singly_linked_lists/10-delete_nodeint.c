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
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	for (i = 0; tmp != NULL && i < index; i++)
	{
		point = tmp;
		tmp = tmp->next;
	}
	if (tmp == NULL)
		return (-1);
	point->next = tmp->next;
	free(tmp);
	return (1);
}
