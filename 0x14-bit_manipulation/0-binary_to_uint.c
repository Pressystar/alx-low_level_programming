#include "main.h"

/**
 * binary_to_uint - Write a function that converts a binary
 * number to an unsigned int
 * @b: string
 * Return: the number converted
 */
unsigned int binary_to_uint(const char *b)
{
int f;
unsigned int dec_v = 0;

if (!b)
return (0);

for (f = 0; b[f]; f++)
{
if (b[f] < '0' || b[f] > '1')
return (0);
dec_v = 2 * dec_v + (b[f] - '0');
}
return (dec_v);
}
