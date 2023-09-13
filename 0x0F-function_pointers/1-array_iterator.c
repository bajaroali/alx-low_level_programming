#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes a function as a given parameter on
 * each element of an array
 * @array: the array to iterate over
 * @size: the size of the array
 * @action: pointer to function used
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
