#include "main.h"

/**
 * set_bit - Write a function that sets the value of a bit to 1
 * @n: the numbers to change
 * @index:  index to set to 1
 * Return: 1 / -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);

*n = ((1UL << index) | *n);
return (1);
}
