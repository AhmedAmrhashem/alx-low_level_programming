#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: pointer to pointer to head
 */
void free_listint(listint_t *head)
{
        listint_t *removal;

	if (head == NULL)
		return;

	while (*head)
	{
		removal = (*head)->next;
		free(*head);
		*head = removal;
	}

	*head = NULL;

}
