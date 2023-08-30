#include "main.h"
/**
 * s_len - a function that calculates the length of a string.
 * @s: the string
 *
 * Return: length of the s
 */
int s_len(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + s_len(s + 1));
	}
}

/**
 * pal - checks if given  string is a palindrome.
 * @s:the  string
 * @i: initial point of recursion
 * @len: length of the s
 * Return: 1 if palindrome 0 otherwise.
 */

int pal(char *s, int i, int len)
{
	if (*(s + i) == *(s + len - 1 - i) && i == (len / 2))
	{
		return (1);
	}
	else if (*(s + i) != *(s + len - 1 - i))
	{
		return (0);
	}
	else
	{
		return (pal(s, i + 1, len));
	}
}

/**
 * is_palindrome - check if the string is a palindrome ex ala.
 * @s: the string
 *
 *
 * Return: 1 if palindrome 0 otherwis.
 */

int is_palindrome(char *s)
{
if (pal(s, 0, s_len(s)) == 1)
{
return (1);
}
else
{
return (0);
}
}
