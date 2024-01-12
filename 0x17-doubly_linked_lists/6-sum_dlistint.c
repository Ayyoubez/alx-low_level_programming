#include "lists.h"

/**
* sum_dlistint - sum of DLL
* @head: head of a list
* Return: sum of data n
*/

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	if (head == NULL)
		return (0);
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
