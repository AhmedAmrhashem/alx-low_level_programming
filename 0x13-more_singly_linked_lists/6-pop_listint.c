#include "lists.h"

/**
 * pop_listint - deletes the head node of a list
 * @head: pointer to pointer to head
 *
 * Return: 0 if list empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temporary;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temporary = (*head)->next;
	free(*head);
	*head = temporary;

	return (num);
}	
