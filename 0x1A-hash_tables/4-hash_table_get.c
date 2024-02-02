#include "hash_tables.h"
/**
* hash_table_get - retrives value
* @ht: pointer
* @key: key value
* Return: value associated
*/


char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *newnode;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = kley_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);
	new_node = ht->array[index];
	while (node && strcmp(new_node->key, key) != 0)
		new_node = new_node->next;
	return ((new_node == NULL) ? NULL : new_node->value);
}
