#include "lists.h"
/**
*free_listint2 - free lisiting
*@head: parameter
*Return: nothing
*/
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	tmp = (listint_t *)malloc(sizeof(listint_t));

	while (*head != NULL)
	{
		tmp = *head;
		*head = tmp->next;
		free(tmp);
	}
	head = NULL;
}
