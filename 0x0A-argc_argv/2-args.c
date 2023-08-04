#include <stdio.h>

/**
 * main: a program that utilieses argv and argc
 *
 * Return: ALways 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i])
	}
	return (0);
}
