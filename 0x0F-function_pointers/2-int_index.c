#include "function_pointers.h"

/**
*int_index - function for the index of the integer
*@array: parameter
*@size: parameter
*@cmp: pointer to a function
*Return: result
*/


int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || cmp == NULL || array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
return (-1);
}
