#include "main.h"

/**
 * print_alphabet - prints lower case alphabet
 *
 **/

void print_alphabet(void)
{

	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

/**
 * print_alphabet_x10 -to print the  aphabet 10 times folowed by a new line
 *
 **/
void print_alphabet_x10(void)
{

	int i;

	for (i = '0'; i <= '9'; i++)
	{
		print_alphabet();
	}
}
