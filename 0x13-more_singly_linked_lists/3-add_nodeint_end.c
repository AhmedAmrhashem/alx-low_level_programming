#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodint_end -  adds a new node at the end of a
 * @head: a pointer to a pointer to a head
 * @n: constant integer
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(size_of(listint_t));
	listint_t *end = *head;

	new->str = n;


