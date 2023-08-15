#include <unistd.h>
#include "main.h"

/**
 *_putchar - writes character c to stdout
 * @c: The charcter to print
 *
 * Return: on Success 1.
 *         on eror, -1 is returned, and isnset appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
