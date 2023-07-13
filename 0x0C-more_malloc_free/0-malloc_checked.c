#include"main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Entry point
 * @b: the size to allocate
 * Return: null
 */
void *malloc_checked(unsigned int b)
{
void *x;

x = malloc(b);

if (x == NULL)
exit(98);

return (x);
}
