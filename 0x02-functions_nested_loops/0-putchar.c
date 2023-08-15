#include <unistd.h>
/**
 * main -prints the _putchar
 *
 * Return 0 on success
 */int _putchar(char c)
{
	return (write(1, &_putchar, 1));
}
