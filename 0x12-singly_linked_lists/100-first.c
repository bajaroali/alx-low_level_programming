#include "lists.h"
#include <stdio.h>

void tortoiseAndHare(void) __attribute__ ((constructor));

/**
 * tortoiseAndHare - prints the lines before main func
 * Return: nothing,
 **/
void tortoiseAndHare(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
