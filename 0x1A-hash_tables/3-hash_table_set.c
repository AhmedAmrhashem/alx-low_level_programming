#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: The hashtable to be added
 * @key: the key
 * @value: the value associated with the key
 *
 * Returns: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index, i;
	hash_node_t *new = NULL;
	char *copy;

	if (!key || !strcmp(key, "") || !ht || !value)
		return (0);

	copy = strdup(value);
	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (!strcmp(ht->array[i]->key, key))
		{
			free(ht->array[i]->value);
			ht->array[i]->value = copy;
			return (1);
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (!new)
	{
		free(copy);
		return (0);
	}
	new->key = strdup(key);
	if (!new->key)
	{
		free(new);
		return (0);
	}
	new->value = copy;
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}	
