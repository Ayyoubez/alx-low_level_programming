#include "function_pointers.h"
#include <stddef.h>
/**
*array_iterator - funtion to store the action
*@array: parameter
*@size: parameter
*@action: pointer
*
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
