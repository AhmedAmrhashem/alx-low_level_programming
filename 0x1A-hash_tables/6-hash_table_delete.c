#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash_table
 * @ht: the hash table to be deleted
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *h = ht;
	hash_node_t *n, *tmp;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			n = ht->array[i];
			while (n != NULL)
			{
				tmp = n->next;
				free(n->key);
				free(n->value);
				free(n);
				n = tmp;
			}
		}
	}
	free(h->array);
	free(h);
}
