#include "main.h"
#include <stdio.h>

/**
 * main - print the first 100 fibonacci numbers
 *
 * Return: Nothing.
 */

int main(void)
{
	int count;
	unsigned long x, y, z;

	x = 0;
	y = 1;

	for (count = 1; count <= 99; count++)
	{
		z = x + y;
		x = y;
		y = z;
		printf("%lu, ", z);
	}

	printf("%lu\n", z + x);
	return (0);
}
