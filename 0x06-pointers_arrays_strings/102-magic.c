#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int a[5] = {98, 402, 1024, 302, 2048};
	int *p;

	p = &a[2];

/* Add your line of code here */
	printf("a[2] = %d\n", *(p));

	return (0);
}
