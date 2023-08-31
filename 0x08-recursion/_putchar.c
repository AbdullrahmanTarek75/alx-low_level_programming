#include <unistd.h>

/**
 *  _putchar - writes charactor c
 *  @c: to print
 *
 *  Return: On success 1.
 *  On error, -1 is set 
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
