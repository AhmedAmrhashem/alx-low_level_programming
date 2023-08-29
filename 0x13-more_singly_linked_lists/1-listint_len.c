#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - returns the number of elements in a list
 * @h: struct pointer
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t length = 0;

	while (h)
	{
		length++;
		h = h->next;
	}
	return length;
}
