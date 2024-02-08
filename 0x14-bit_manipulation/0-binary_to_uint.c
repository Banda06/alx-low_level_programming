#include "main.h"
/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
int i;
unsigned int digit = 0;
/*Check if the input string is NULL*/
if (!b)
return (0);

/* Iterate through each character in the string*/
for (i = 0; b[i]; i++)
{
/* Check if the character is not '0' or '1'*/
if (b[i] != '0' && b[i] != '1')
return (0);
/* Convert the binary digit to decimal and update the result*/
digit = 2 * digit + (b[i] - '0');
}
return (digit);
}
