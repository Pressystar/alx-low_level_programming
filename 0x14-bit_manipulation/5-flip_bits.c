#include"main.h"

/**
 * flip_bits - Write a function that returns the number of bits
 *  you would need to flip to get from one number to another.
 *  @n: the numbers
 *  @m: the next number
 *  Return: the numbers of bits to convert
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int dec_val = n ^ m;
unsigned int printed = 0;

while (dec_val)
{
if (dec_val & 1L)
printed++;
dec_val = dec_val >> 1;
}
return (printed);
}
