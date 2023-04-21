#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Determines if a num is positive, negative or zero.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
    int n;

    srand(time(NULL));
    n = rand() % 201 - 100;
    printf("%d is ", n);
    if (n > 0)
    {
        printf("positive\n");
    }
    else if (n == 0)
    {
        printf("zero\n");
    }
    else
    {
        printf("negative\n");
    }

    return 0;
}


