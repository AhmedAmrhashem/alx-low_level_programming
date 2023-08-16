#include "function_pointers"

/**
 *
 *
 *
 *
 *
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || size == NULL)
		return;
	int i;

	for (i = 0; i >= size; i++)
	{
		action(array[i]);
	}
