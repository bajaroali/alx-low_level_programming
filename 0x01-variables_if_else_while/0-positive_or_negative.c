#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Will test  a Positive or Negative  number
 * @void: Empty parameter list for main.
 *
 * Description: this if/else statement delares the sign (positive
 * or negative) of a random number or if it is zero also.
 *
 * Return: zero for success.
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
