#include <unistd.h>
/**
 * main - Entry point
 *
 * Description: A C program that prints with write function
 *
 * Return: Always 1 (not Success)
 */
int main(void)
{
	char abdo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(1,abdo,59);
	return (1);
}
