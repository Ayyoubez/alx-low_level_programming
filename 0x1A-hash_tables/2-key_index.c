#include "hash_tables.h"

/**
* key_index - return the index
* @key: key tom the index
* @size: size of the array
* Return: the index key
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
