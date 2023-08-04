#include <stdio.h>
#include <stdlib.h>

/**
 * main: a program that utilieses argv and argc
 *
 * Return: Returns 1 with a certain condition, otherwise 0
 */
int main(int argc, char *argv[])
{
	int multiply;

	if(argc =! 1)
	{
		multiply = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", multiply);
	}
	else
	{
		printf("Error");
		return (1);
	}
	return (0);
}
