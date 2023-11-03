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
	
