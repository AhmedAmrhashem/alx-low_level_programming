#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: a struct pointer
 * Return: counter
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
