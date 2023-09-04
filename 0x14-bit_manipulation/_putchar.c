#include "main.h"
#include <unistd.h>

/**
 * _putchar - write the character c to stdout
 * @c: character to print
 *
 * Return: success 1
 * on error, -1 and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
