#include "main.h"

/**
 * get_bit - This function gets the value of,
 * a bit at a given index
 * @n: the number
 * @index: the index starting from 0 of the bit required
 *
 * Return: value converted
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return ((n >> index) & 1);
}
