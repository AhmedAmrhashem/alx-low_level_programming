#include<stdio.h>

/**
 * main - Prints the Alphabet in lowercase
 *
 * Return: Always rertun 0
 */
int main(void)
{
	char c = 'a';
	char ch = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (ch <= 'Z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
