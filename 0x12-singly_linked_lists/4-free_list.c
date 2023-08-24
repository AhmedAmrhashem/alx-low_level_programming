#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: start node
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *shine = head;

	while (head)
	{
		shine = head->next;
		free(head->str);
		free(head);
		head = shine;
	}
}
