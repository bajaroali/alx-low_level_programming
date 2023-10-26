#include "main.h"
#include <stddef.h>

/**
 * clear_bit - this function sets a bit at a position to 0
 * @n: the number to used
 * @index: the position to be cleared
 *
 * Return: 1 for  success, -1 for fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || (index > (sizeof(unsigned long int) * 8) - 1))
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
