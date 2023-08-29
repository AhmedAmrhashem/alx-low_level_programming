#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: start node
 */
void free_listint(listint_t *head)
{
	lisintt_t *remove;

	while (head)
	{
		remove = head->next;
		free(head);
		head = remove;
	}
}
