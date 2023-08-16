#include "function_pointers"

/**
 * print_name: the function prints a name
 *
 *
 *
 *
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL ||f == NULL)
		return;
	f(name);
}
