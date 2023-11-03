#include "hash_table.h"

/**
 * key_index - gives the indext to a key
 * @key: the key to access the hashtable
 * @ size: the size of the array
 *
 * Return: the index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	usigned long int index;

	index = hash_djb(key);

	return (index % size);
}
