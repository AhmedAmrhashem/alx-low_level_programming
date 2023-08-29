#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - prints all list's elements
 * @h: pointer struct
 * Return: number of nodes a3adad
 */
size_t print_listint(const listint_t *h)
{
	size_t a3adad = 0;

	while (h)
	{
		printf("%d\n", h->n);
		a3adad++;
		h = h->next;
	}
	return a3adad;
}
