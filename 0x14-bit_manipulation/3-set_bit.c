#include "main.h"

/**
 * set_bit - Write a function that sets the value
 *  of a bit to 1 at a given index.
 *  @n: set the pointer to the number changed
 *  @index: indicating the index of the bit set
 *  Return: 1 or -1 @ fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);

*n = ((1L << index) | *n);
return (1);
}
