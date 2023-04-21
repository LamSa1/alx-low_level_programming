#include <unistd.h>
/**
* main - Entry point
*
* Description: print a qoute using write functin;
*
* Return: 1 (error).
*/
int main(void)
{
	char Q[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, Q, 58);
	return (1);
}
