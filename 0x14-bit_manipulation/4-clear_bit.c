#include "main.h"


/**
 * clear_bit - Write a function that sets the value of a bit to 0
 * @n: numbers to change
 * @index: the index to clear
 * Return: 1 / -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);

*n = (~(1UL << index) & *n);
return (1);
}
