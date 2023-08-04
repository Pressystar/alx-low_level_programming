#include "main.h"

/**
 * binary_to_uint - Write a function that converts a binary
 * number to an unsigned int
 * @b: string
 * Return: the number converted
 */
unsigned int binary_to_uint(const char *b)
{

unsigned int dec_v = 0;

if (!b)
return (0);
while (*b)
{
if (*b != '0' && *b != '1')
return (0);
dec_v = dec_v * 2 + (*b++ - '0');
}
return (dec_v);
}
