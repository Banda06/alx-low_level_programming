#include "main.h"

/**
 * _isdigit - check if the characters are digits
 * 0x: The number being checked
 * Return: 1 for a character that will be a digit or 0 for anything else
 */

int _isdigit(int x)

{
	if (x >= 48 && x <= 57)
	{
	return (1);
	}
	return (0);

}
