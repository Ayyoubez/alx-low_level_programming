#include "lists.h"

/**
* print_dlistint - Print double linked list
* @h: head pointer
* Return: return number of elements
*/

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	int i = 0;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		i++;
	}
	return (i);
}
