#include "lists.h"
/**
*sum_listint - sum of linked list
*@head: parameter
*Return: sum as a result
*/
int sum_listint(listint_t *head)
{
	listint_t *tmp;
	int sum = 0;

	if (head == NULL)
		return (0);
	tmp = head;
	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
return (sum);
}
