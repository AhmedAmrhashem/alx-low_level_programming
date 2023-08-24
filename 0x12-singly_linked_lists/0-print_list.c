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
	size_t count = 0;
	list_t *ptr = NULL;

	ptr = h;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	ptr = h;
	while (ptr != NULL)
	{
		printf("[%ld`] ", count);
		printf("%s", ptr->str);
		ptr = ptr->next;
	}
	return count;
}
