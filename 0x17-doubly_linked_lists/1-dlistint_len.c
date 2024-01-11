#include "lists.h"
/**
* dlistint_len - check the number of nodes
* @h: head of the list
* Return: number of nodes
*/

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;
	const dlistint_t *temp = h;

	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
