#include "lists.h"

/**
* free_dlistint - fress a link list
* @head: pointer to the head
* Return: nothing after freeing
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
