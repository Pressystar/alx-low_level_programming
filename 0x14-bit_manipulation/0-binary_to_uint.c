#include "main.h"


/**
 * binary_to_uint - Write a function that converts a binary number
 * @b: binary number containing the string
 * Return: convertd number
 */
unsigned int binary_to_uint(const char *b)
{
int g;
unsigned int dec_v = 0;

if (!b)
return (0);
for (g = 0; b[g]; g++)
{
if (b[g] < '0' || b[g] > '1')
return (0);
dec_v = 2 * dec_v + (b[g] - '0');
}
return (dec_v);
}
