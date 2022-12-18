#include <stdio.h>

/**
 * main - Entry point
 * Return:0 always
 */
int main(void)
{
	int b;
	long int c;
	long long int d;
	char a;
	float e;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size if an int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of float: %lu bytes(s)\n", (unsigned long)sizeof(e));
	return (0);
}
