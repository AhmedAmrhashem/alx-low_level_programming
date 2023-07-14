#include<stdio.h>

/**
 * main - Prints the Alphabet in lowercase
 *
 * Return: Always return 0
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
