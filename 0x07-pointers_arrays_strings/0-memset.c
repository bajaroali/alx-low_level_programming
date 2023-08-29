#include "main.h"

/**
 * *_memset - function that fills memory with a constant byte
 * @s: memory to be filled
 * @b: the char to be copied
 * @n: number of times to copy char b
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
