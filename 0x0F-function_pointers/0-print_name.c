#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name as is
 * @name: name to be printed
 * @f: pointer to the printing function
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
