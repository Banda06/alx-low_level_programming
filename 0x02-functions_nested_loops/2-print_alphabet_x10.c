#include "main.h"

/**
 * Description: print lowercase alphabet followed by new line
 * print_alphabet_x10 - print alphabet 10 times
 *
 * Retuurn: void
 */
void print_alphabet_x10(void)
{
	int i;
	int c;

	for (i = 'a'; i < 10; ++i)
	{
		for (c = 'a'; c <= 'z'; ++c)
			_putchar(c);
		_putchar('\n');
	}
}
