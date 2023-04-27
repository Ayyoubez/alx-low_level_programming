#include <stdio.h>
#include "lists.h"
/**
*print_list - function to print all elements
*@h: parameter
*Return: result
*/

size_t print_list(const list_t *h)
{
	size_t p = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u]%s\n", h->len, h->str);

		p++;
		h = h->next;
	}
	return (p);
}
