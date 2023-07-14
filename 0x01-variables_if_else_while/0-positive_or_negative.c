#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - determines if the integer n is a negative, positive or zero
 *
 * Return : Always returns 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		printf("%d is negative\n", n);
	if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is positive\n", n);
	return (0);
}
