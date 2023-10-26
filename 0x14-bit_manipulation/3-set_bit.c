#include "main.h"
#include <stddef.h>

/**
 * set_bit - function sets a bit at a position to 1
 * @n: the number to be used
 * @index: the index to be set
 *
 * Return: 1 for  success, -1 on fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || (index > (sizeof(unsigned long int) * 8) - 1))
		return (-1);
	*n |= (1 << index);
	return (1);
}
