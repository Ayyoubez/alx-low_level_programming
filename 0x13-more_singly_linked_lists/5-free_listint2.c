#include "lists.h"
/**
*free_listint2 - free lisiting
*@head: parameter
*Return: nothing
*/
void free_listint2(listint_t **head)
{
	if (head == NULL)
		return;

	listint_t *tmp;

	while (*head != NULL)
	{
		tmp = (*head->next;
		free(*head);
		*head = tmp;
	}
	*head = NULL;
}
