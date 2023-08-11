#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: alphant in lower and upper case
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c = 'a';
	char c2 = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (c2 <= 'Z')
	{
		putchar(c2);
		c2++;
	}
	putchar('\n');

	return (0);
}
