#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return : 0
 */
int main(void)
{
	char c = 'a';
	
	while (c <= 'z')
	{
		putchar(c);
		putchar('\n');
		c++;
	}
}
