#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - prints base 10 numbers single digits
 *
 *
 *
 * Return: zero for success
*/
int main(void)
{
	char num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
