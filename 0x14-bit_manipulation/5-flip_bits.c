#include"main.h"

/**
 * flip_bits - Write a function that returns the number
 * of bits you would need to flip
 * @n: tge first number
 * @m: the second
 * Return: the number to be changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int g, count = 0;
unsigned long int curr;
unsigned long int exclusive = n ^ m;

for (g = 63; g >= 0; g--)
{
curr = exclusive >> g;
if (curr & 1)
count++;
}
return (count);
}
