#include "main.h"

/**
 * _strcat - will concatenate 2 strings
 * @toappend: string to append to
 * @srcstr: string to add
 *
 * Return: a pointer to the resulting string
 */
char *_strcat(char *toappend, char *srcstr)
{
	int i, j;

	i = 0;
	j = 0;

	while (toppend[i] != '\0')
		i++;

	while (srcstr[j] != '\0')
	{
		toappend[i] = srcstr[j];
		j++;
		i++;
	}

	toappend[i] = '\0';

	return (toappend);
}
