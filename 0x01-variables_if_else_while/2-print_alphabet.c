#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - prints the alphabets in lowercase
 *
 *
 * Can only use putchar
 *
 * Return: zero for success
*/
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
