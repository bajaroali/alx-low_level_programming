#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - print alphabet in revers z-a
 *
 *
 * Return: zero for success
*/
int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}
