#include <stdlib.h>
#include "main.h"
/**
*_realloc - resize a pointer
*@ptr: parameter
*@old_size: parameter
*@new_size: parameter
*Return: new pointer with nez size
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *old;
	char *new;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	new = malloc(new_size);
	if (!new)
		return (NULL);
	old = ptr;
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			new[i] = old[i];
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			new[i] = old[i];
	}
	free(ptr);
return (new);
}
