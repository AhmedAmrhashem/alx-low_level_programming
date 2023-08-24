#include<stdio.h>
void before_main() __attribute__((constructor));
/**
 * before_main: prints a string before main
 * Retrun: void 
 */
void before_main() {
	printf("You're beat! and yet, you must allow,\n
	I bore my house upon my back!\n");

int main(void)
{
    printf("(A tortoise, having pretty good sense of a hare's nature, challenges one to a race.)\n");
    return (0);
}
