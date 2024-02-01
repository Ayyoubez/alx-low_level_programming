#include "hash_tables.h"

/**
* hash_djb2 - djb2 algorithm
* @str: string hash
* Return: calculate the array string
*/

unsigned long int hash_djb2(const unsigned char *str);
{
	unsigned long int array;
	int t;

	array = 5381;
	while ((t = *str++))
		array = ((array << 5) + array) + t;

	return (array);
}
