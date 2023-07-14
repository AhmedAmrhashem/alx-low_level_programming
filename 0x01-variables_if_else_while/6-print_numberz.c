#include <stdio.h>

/**
 * main - Prints all numbers of base 10
 *
 * Return: Always return 0
 */
int main(void)
{
	int ch = '0';

	while (ch <= '9')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
