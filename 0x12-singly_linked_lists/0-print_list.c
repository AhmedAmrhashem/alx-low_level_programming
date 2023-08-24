#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list: prints all the elements in a linked list
 * @h: pointerof type list_t
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t a3adad = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		a3adad++;
	}
	return a3adad;
}
