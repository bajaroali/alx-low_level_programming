#include "main.h"
#include <stdio.h>

/**
 * main - prints the  sum of all the even fibonacci numbers under 4x10 pow 6
 *
 * Return: Nothing to return.
 */

int main(void)
{
	unsigned long x, y, z, sum;

	z = 0;
	x = 0;
	y = 1;
	sum = 0;

	while (z < 4000000)
	{
		z = x + y;
		x = y;
		y = z;

		if (z % 2 == 0)
			sum += z;
	}

	printf("%lu\n", sum);
	return (0);
}
