#include <stdlib.h>
#include "lists.h"
/**
*list_len - number of elements
*@h: parameter
*Return: result
*/

size_t list_len(const list_t *h)
{
	size_t p = 0;

	while (h)
	{
		p++;
		h = h->next;
	}
	return (p);
}
