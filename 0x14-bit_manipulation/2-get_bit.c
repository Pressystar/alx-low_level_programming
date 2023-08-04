#include "main.h"

/**
 * get_bit - Write a function that returns the
 *  value of a bit at a given index.
 *  @n: the number of sting to search
 *  @index:the index indicating the bits
 *  Return: value
 */
int get_bit(unsigned long int n, unsigned int index)
{
int b_val;

if (index > 63)
return (-1);

b_val = (n >> index) & 1;
return (b_val);
}
