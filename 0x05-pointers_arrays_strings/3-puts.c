#include "main.h"

/**
 * _puts - will print a string to the stdout
 * @str: pointer to the string to be  printed
 */
void _puts(char *str)
{
	int j;

	for (j = 0; str[j] != '\0'; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
