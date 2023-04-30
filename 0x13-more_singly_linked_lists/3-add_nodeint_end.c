#include "lists.h"

/**
*add_nodeint_end - adding node at the end
*@head: parameter
*@n: parameter
*Return: newnode
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp, *newnode;

	newnode = (listint_t *)malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	tmp = *head;
	while (tmp->next != 0)
	{
		tmp = tmp->next;
	}
	tmp->next = newnode;
return (newnode);
}
