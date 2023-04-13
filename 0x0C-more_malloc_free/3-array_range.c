#include <stdlib.h>
#include "main.h"
/**
*array_range - creation of an array
*@min: minimum value
*@max: maximum value
*Return: result pointer
*/

int *array_range(int min, int max)
{
	int *p;
	int i, c = 0;

	if (min > max)
		return (NULL);
	c = max - min;
	p = malloc(sizeof(int) * (c + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		p[i] = min++;
	return (p);
}
