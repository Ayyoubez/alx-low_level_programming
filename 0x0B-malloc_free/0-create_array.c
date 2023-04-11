#include <stdlib.h>
#include "main.h"
/**
*create_array - function to create an array with initialisation
*@size: size of the array
*@c: parameter to pass
*Return: array
*/
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i = 0;

	ptr = malloc(size * sizeof(char));
	if (size == 0 || ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
}
