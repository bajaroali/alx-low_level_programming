#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Prints alphabet alphABET then new line
 *
 *
 * Can only use putchar
 *
 * Return: zero  for success
*/
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	letter = 'A';

	while (letter <= 'Z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
