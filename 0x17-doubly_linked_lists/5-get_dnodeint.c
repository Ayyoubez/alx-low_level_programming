#include "lists.h"

/**
* get_dnodeint_at_index - value at index
* @head: head pointer
* @index: index of the node
* Return: return a node at index
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int count = 1;
	unsigned int i = 0;

	temp = head;
	if (head == NULL)
		return (NULL);
	while (temp->next != NULL)
	{
		temp = temp->next;
		count++;
	}
	if (index > count)
		return (NULL);
	temp = head;
	while (i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp);
}
