#include "3-calc.h"
#include <stdio.h>

/**
 * op_add -function that calculates the sum of two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - this calculates the difference of two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function that calculates the
 * product of two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function that calculates the division of two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the result of the division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - function that calculates the remainder of the
 * division of 2 integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: remainder of a divided b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
