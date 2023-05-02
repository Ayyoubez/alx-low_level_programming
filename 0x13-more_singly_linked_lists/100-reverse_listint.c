#include "lists.h"
/**
*reverse_listint - reverse lisitng
*@head: parameter
*Return: first node
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = NULL;
	listint_t *previous = NULL;

	while (*head)
	{
		current = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = current;
	}
	*head = previous;
	return (*head);
}
