#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the hash table to look up
 * @key: the key
 *
 * Return:  the value associated with the element, or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *tmp;

	index = key_index((const unsigned char *)key, ht->size);

	if (!(ht->array[index]))
		return (NULL);
	else
	{
		tmp = ht->array[index];
		if (!strcmp(tmp->key, key))
		{
			return (tmp->value);
		}
		tmp = tmp->next;
	}
	return (NULL);
}
