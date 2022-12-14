#include <unistd.h>

/**
 * putchar writes the characer c to the stdout
 * @c: the character to print
 * Return: 1.
 */

int _putchar(char c)
{
	return (write(1,&c, 1));
}
