#include "hash_tables.h"

/**
* hash_table_set - add or udate
* @ht: arguments
* @key: argument
* @value: argument
* Return: 0 or 1
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *value_c;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || *key == '\0' || value)
		return (0);

	value_c = strdup(value);
	if (value_c == NULL)
		return (0);

	index = jey_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcpm(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_c;
			return (1);
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(value_c);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
		free(new);
		return (0);
	}
	new->value = value_c;
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
