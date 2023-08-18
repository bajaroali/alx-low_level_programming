#include "main.h"

/**
 * print_line - will print a line
 * @n: length of the  line to be printed
 * Return: nothing
 **/

void print_line(int n)
{
	while (n >= 1)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
