#include "main.h"

/**
 * clear_bit - Sets the value of a bit at a given index to 0.
 * @n: A pointer to the bit.
 * @index: The index to set the value at - indices start at 0.
 *
 * Return: If an error occurs - -1.
 *         Otherwise - 1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	/*Checks if the index is out of bounds*/
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);/*Return -1 for an out-of-bounds index*/

	*n &= ~(1 << index);
	/*Return 1 to indicate success*/
	return (1);
}
