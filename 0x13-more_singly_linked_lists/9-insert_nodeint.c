#include "lists.h"
/**
*insert_nodeint_at_index - insert a new node
*@head: parameter
*@idx: parameter
*@n: parameter
*Return: result
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *tmp;
	unsigned int i = 0;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	tmp = *head;
	while (i < idx - 1 && tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}
	if (tmp != NULL)
	{
		newnode->next = tmp->next;
		tmp->next = newnode;
		return (newnode);
	}
	free(newnode);
	return (NULL);
}
