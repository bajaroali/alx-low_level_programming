#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed into
 * the program
 * @argc: the number of arguments given
 * @argv: array of the  arguments
 *
 * Return: 0 for success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
