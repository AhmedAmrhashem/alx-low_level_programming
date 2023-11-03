#include "hash_tables.h"

/**
 * hash_table_create - a function that creates a hashtable
 * @size: the size of the array
 *
 * Retrun: Null if anything is worng, otherwise returns a pointer to 
 * 	the new made hashtable
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;

	hash_table_t *NewTable = malloc(sizeof(hash_table_t));

	if (NewTable)
		return (NULL);

	NewTable->size = size;
	NewTable->array = malloc(sizeof(hash_node_t *) * size);

	if (!(NewTable->array))
		return (NULL);
	else
	{
		for ( i = 0; i < size; i++)
			NewTable->array[i] = NULL;
	}
	return (NewTable);
}
