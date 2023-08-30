#include "main.h"

/**
 * _puts_recursion - prints a stringfollowed b a new line
 * @s: string to print
 * Description: print string using recursion
 * Return: nothing
 **/

void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
