#include <stdlib.h>
#include "main.h"
/**
*_memset - set memory to 0
*@s: paramemeter
*@e: parameter
*@n: parameter
*Return: pointer reset
*/

char *_memset(char *s, char e, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = e;
	return (s);
}
/**
*_calloc - function to allocate memory for an array
*@nmemb: number of elements
*@size: size of the type
*Return: pointer allocated
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * sizeof(size));
	if (p == NULL)
		return (NULL);
	_memset(p, 0, nmemb * size);
return (p);
}
