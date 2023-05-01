#include "lists.h"
/**
**get_nodeint_at_index - return node with index
*@head: parameter
*@index: parameter
*Return: indexed node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	tmp = head;
	while (i < index && tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}
	if (i == index && tmp != NULL)
		return (tmp);
	return (NULL);
}
