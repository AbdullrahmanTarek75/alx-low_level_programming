#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print single digit number
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int d = 0;

	while (d <= 9)
	{
		printf("%i", d);
		d++;
	}

	printf("\n");

	return (0);
}
