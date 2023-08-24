#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len: Returns the lenght of the list
 * @h: a pointer of type list_t
 * Return: List Length
 */
size_t list_len(const list_t *h)
{
        size_t counter = 0;

        while (h)
        {
                counter++;
                h = h->next;
        }
        return counter;
}
