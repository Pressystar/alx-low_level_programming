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
if (index >= sizeof(n) * 8)
return (-1);
if (*n & 1UL << index)
*n ^= 1UL << index;
return (1);
}
