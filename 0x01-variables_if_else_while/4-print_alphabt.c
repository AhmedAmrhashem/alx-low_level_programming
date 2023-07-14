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
		if ( c != 'q' && c!= 'e')
			 putchar(c);
                c++;
        }
	return (0);
}

