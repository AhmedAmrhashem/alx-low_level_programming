#include "main.h"

/**
 *swap_int: swaps integers
 *
 * tmp: a temperoary container to help with the switch
 * *a: the first argument
 * *b: the second argument
 */
void swap_int(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
