#include <stdio.h>
/**
*main - Entry point
*
*Description: A C program that prints with put function
*
*Return: always 0 (success)
*/
int main(void)
{
        puts("\"Programming is like building a multilingual puzzle);
        return (0);
}
root@7788c34b9847:~/Betty/alx-low_level_programming/0x00-hello_world# cat 5-printf.c
#include <stdio.h>
/**
 * main Entry point
 *
 * Description: using sizeof to print the size of various types.
 *
 * Return: Always 0 (Success)
*/
int main(void)

{

        printf("size of a char: %u byte(s)\n", sizeof(char));
        printf("size of an int: %u byte(s)\n", sizeof(int));
        printf("size of a long int: %u byte(s)\n", sizeof(long int));
        printf("size of a long long int: %u byte(s) \n", sizeof(long long int));
        printf("size of a float: %u byte(s)\n", sizeof(float)); return (0);
}
