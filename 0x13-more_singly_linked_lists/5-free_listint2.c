#include "lists.h"
/**
*free_listint2 - free lisiting
*@head: parameter
*Return: nothing
*/
void free_listint2(listint_t **head)
{
	listing_t *tmp;

	tmp = *head;
	while (*head != NULL)
	{
		tmp = *head;
		*head = tmp->next;
		free(tmp);
	}
	*head = NULL;
}	
