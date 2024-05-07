#include "search_algos.h"

/**
 * recursive_search - searches for a value in an array
 * @array: array
 * @size: size of the array
 * @value: value to search
 * Return: index
 */
int recursive_search(int *array, size_t size, int value)
{
	size_t middle = size / 2;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);

	printf("\n");

	if (middle && size % 2 == 0)
		middle--;

	if (value == array[middle])
		return ((int)middle);

	if (value < array[middle])
		return (recursive_search(array, middle, value));

	middle++;

	return (recursive_search(array + middle, size - middle, value) + middle);
}

/**
 * binary_search - calls to binary_search to return
 * @array: array
 * @size: size of the array
 * @value: value to search
 * Return: index
 */
int binary_search(int *array, size_t size, int value)
{
	int index;

	index = recursive_search(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}
