#include "main.h"

/**
 * get_endianness - this function checks whether,
 * a machine is a big endian or little
 *
 * Return: 1 if little endian, 0 if big
 */
int get_endianness(void)
{
	unsigned int test = 1;
	char *endian = (char *)&test;

	if (*endian)
		return (1);
	return (0);
}
