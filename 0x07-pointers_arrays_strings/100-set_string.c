#include "main.h"

/**
 * set_string - function sets the value of a pointer to a char
 * @s: pointer to pointer we need to set to
 * @to: str to set
 */
void set_string(char **s, char *to)
{
	*s = to;
}
