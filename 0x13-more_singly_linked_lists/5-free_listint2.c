#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: pointer to pointer to head
 * Return: void
 */
void free_listint(listint_t *head)
{
        list_t *remove = head;

        while (head)
        {
                remove = head->next;
                free(head->n);
                free(head);
                head = remove;
		*head = null;		
        }
}
