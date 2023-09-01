#include "main.h"
#include <stdio.h>

/**
 * main - prints the name of a program
 * even after renaming without compiling
 * @argc: the number of arguments
 * @argv: array ofthe  arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
