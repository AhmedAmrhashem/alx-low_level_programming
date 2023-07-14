#include <stdio.h>

/**
 * main - Prints all numbers of base 10
 *
 * Rerurn: Always return 0
 */
int main()
{
	unsigned char ch = '0';

	while(ch <= '9')
	{ 
		putchar(ch);
		ch++;
	}
	return (0);
}
