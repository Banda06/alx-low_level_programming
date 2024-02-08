#include "main.h"

/**
 * flip_bits - func that returns no. of bits needed to flip to get,
 * from one number to another.
 * @n: unsigned long integer.
 * @m: unsigned long integer.
 *
 * You are not allowed to use the % or / operators.
 *
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}
