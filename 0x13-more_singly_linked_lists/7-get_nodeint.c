#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list
 * @head: first node in the linked list
 * @index: index of the node to return
 *
 * Return: pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *mo2aqet = head;

	while (mo2aqet && i < index)
	{
		mo2aqet = mo2aqet->next;
		i++;
	}

	return (mo2aqet ? mo2aqet : NULL);
}
