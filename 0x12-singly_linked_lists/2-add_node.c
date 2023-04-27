#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
*add_node - add a node
*@head: parameter
*@str: parameter
*Return: result
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *n;
	unsigned int l = 0;

	while (str[l])
		l++;

	n = malloc(sizeof(list_t));
	if (!n)
		return (NULL);
	n->str = strdup(str);
	n->len = l;
	n->next = (*head);
	(*head) = n;
	return (*head);
}
