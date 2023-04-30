#include "lists.h"
/**
*free_listint - free the memory
*@head: parameter
*Return: nothing
*/
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
