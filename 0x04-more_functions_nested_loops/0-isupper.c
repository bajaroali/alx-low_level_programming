#include "hmain.h"


/**
 * _isupper - function checks if given  value is upper case
 *
 * @c: var to be tested
 *
 * Return: 1 if c is capital, otherwise 0
 **/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
