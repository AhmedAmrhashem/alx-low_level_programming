#include "hash_tables.h"

/**
 * key_index - gives the indext to a key
 * @key: the key to access the hashtable
 * @ size: the size of the array
 *
 * Return: the index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);

	return (index % size);
}
