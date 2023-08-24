#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints elements of list
 * @h: srtruct pointer
 * Return: num of lists
 */
size_t print_list(const list_t *h)
{
	size_t a3adad = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		a3adad++;
		h = h->next;
	}
	return (a3adad);
}
