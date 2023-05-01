#include "lists.h"
/**
*pop_listint - delete the first node
*@head: parameter
*Return: data stored in node deleted
*/
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int x = 0;

	if (head == NULL)
		return (0);
	tmp = (*head)->next;
	*head = tmp->next;
	x = tmp->n;
	free(tmp);
return (x);
}
