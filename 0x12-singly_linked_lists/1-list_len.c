#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * list_len: Returns the lenght of the list
 * @h: a pointer of type list_t
 * Return: List Length
 */
size_t list_len(const list_t *h)
{
	size_t counter;

	while (h)
	{
		counter++;
		h = h->next;
	}
	return counter;
}
