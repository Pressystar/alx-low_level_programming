#include"main.h"

/**
 * clear_bit - Write a function that sets the value
 * of a bit to 0 at a given index.
 * @n:  set the pointer to the number
 * @index: index indicating the bit
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);

*n = (-(1UL << index) & *n);
return (1);
}
