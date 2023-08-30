#include "main.h"

/**
 * power_operation - function that returns the natural square root of a number.
 * @n: int var of given number
 * @i: iterator.
 * Return: square root or -1.
 */

int power_operation(int n, int i)
{
if (i % (n / i) == 0)
{
if (i * (n / i) == n)
{
return (i);
}
else
{
return (-1);
}
}
return (0 + power_operation(n, (i + 1)));
}

/**
 * _sqrt_recursion - a func that returns the natural square
 * root of a number.
 * @n: int var of a given number
 * Return: the square root of number
 */

int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (0);
}
else if (n == 1)
{
return (1);
}
return (power_operation(n, 2));
}
