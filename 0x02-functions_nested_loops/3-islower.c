#include "main.h"
#include <ctype.h>
/**
 * _islower - chech if the given character is lower case.
 * @c: character to test.
 *
 * Return: 1 if (true), else 0 (false)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

}
