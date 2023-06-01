#include <stdio.h>

void firstone(void) __attribute__ ((constructor));

/**
 * firstone - Function to be executed before main
 */
void firstone(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
