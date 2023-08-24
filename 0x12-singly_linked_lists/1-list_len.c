#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a list
 * @h: a struct pointer
 * Return: Number of Elements (counter)
 */
size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h)
	{
		counter++;
		h = h->next;
	}
	return counter;
}
