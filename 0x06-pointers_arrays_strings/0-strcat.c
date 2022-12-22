#include "main.h"
/**
 * strcat - concatenates two strings.
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest.
 */
char *strcat(char *dest, const char *src)
{
	int i, c;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (c = 0; src[c] != '\0'; i++)
		;
	{
		dest[i] = src[c];
		i++;
	}
	dest[i] = '\0';
	return (dest);

}
