#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
	/**
	 * Base case: if the number is greater than 1,
	 * continue recursion
	 */
	if (n > 1)
		print_binary(n >> 1);/* Right shift to get the next bit */

	/* Print the least significant bit (LSB) of the number*/
	_putchar((n & 1) + '0');

	/**
	 *Use bitwise AND to get the LSB and convert to ASCII
	 * Recursion and printing build up the binary
	 * representation (MSB)
	 */

}
