#include "lists.h"
/**
*free_listint2 - free lisiting
*@head: parameter
*Return: nothing
*/
void free_listint2(listint_t **head)
{
	if (head == NULL || *head == NULL)
		exit;
	listint_t *tmp;

	while (*head != NULL)
	{
		tmp = *head;
		*head = tmp->next;
		free(tmp);
	}
	*head = NULL;
}
