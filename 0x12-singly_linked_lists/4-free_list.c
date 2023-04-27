#include "lists.h"
/**
*free_list - free list
*@head: parameter
*Return: nothing
*/
void free_list(list_t *head)
{
	list_t *t;

	while (head)
	{
		t = head->next;
		free(head->str);
		free(head);
		head = t;
	}
}
