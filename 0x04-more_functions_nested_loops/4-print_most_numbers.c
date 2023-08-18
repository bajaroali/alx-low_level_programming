#include "main.h"

/**
 * print_most_numbers - to print 0-9 skip 2& 4
 *
 * Return: nothing
 **/

void print_most_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		if ((i == '2') || (i == '4'))
			i++;
		_putchar(i);
	}
	_putchar('\n');
}
