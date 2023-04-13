#include <stdlib.h>
#include "main.h"
/**
*_calloc - function to allocate memory for an array
*@nmemb: number of elements
*@size: size of the type
*Return: pointer allocated
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;
	unsigned int i = 0;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	p = malloc(nmemb * sizeof(size));
	if (!p)
		return (NULL);
	while (i < nmemb)
	{
		p[i] = 0;
		i++;
	}
	p[i] = '\0';
return (p);
}
